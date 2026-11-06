#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char ele) {
    stack[++top] = ele;
}

char pop() {
    if(top == -1) {
        return -1;
    }
    else{
        return stack[top--];
    }

}

int precedence(char ele) {
    if(ele == '[' || ele == '(' || ele == '{') 
        return 0;

    else if(ele == '^')
        return 1;

    else if(ele == '*' || ele == '/')
        return 2;

    else    
        return 3;

}

int main(){

    char exp[100];
    printf("Enter the expression : ");
    scanf(" %s",exp);

    char *ptr = exp;

    while (*ptr != '\0') {

        if(isalnum(*ptr)) {
            printf(" %c", *ptr);
        }

        else if(*ptr == '[' || *ptr == '(' || *ptr == '{') {
            push(*ptr);
        }

        else if (*ptr == ']' || *ptr == ')' || *ptr == '}') {
            while(top != -1 && stack[top] != '[' && stack[top] != '{' && stack[top] != '(') {
                printf("%c", pop());
            }

            if(top = -1) {
                top--;
            }
        }

        else {
            while(top != -1 && precedence(stack[top]) <= precedence(*ptr) && stack[top] != '[' && stack[top] != '{' && stack[top] != '(') {
                printf("%c", pop());
            }

            push(*ptr);
        }

        ptr++;
    }

    while(top!=-1) {
        printf("%c",pop());
    }

    return 0;
}