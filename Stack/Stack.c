#include <stdio.h>
#include <stdlib.h>
#define MAX 5


int top = -1;
int stack[MAX];

    int push(int item) {
        if(top == MAX - 1) {
            printf("STACK Overflow, cannot push another item");
        }
        top++;
        stack[top] = item;
    }

    void pop(){
        if(top == -1) {
            printf("STACK Underflow, cannot pop another item");
        }

        printf("Popped %d from stack", stack[top]);
        --top; 
    }

    void display(){
        if(top == -1) {
            printf("STACK Underflow, stack is empty");
        }

        printf("Printing stack from top: \n");

        for(int i = 0; i <= top; i++) {
            printf("%d \n", stack[i]);
        }
    }
    int main(){

        int ch;

        printf("------STACK OPERATIONS------- \n");
        while(1) {
            printf("\n1. Push an item into stack\n");
            printf("2. Pop an item from stack\n");
            printf("3. Display stack contents\n");
            printf("4. Exit \n");

            printf("Enter option: ");
            scanf("%d", &ch);
            int num;
            switch(ch) {
                case 1: 
                    printf("Enter item: ");
                    scanf("%d", &num);
                    push(num);

                    break;
                
                case 2:
                    pop();
                    break;
                
                case 3:
                    display();
                    break;

                case 4:
                    exit(0);

                default:
                    printf("Enter valid choice: ");
            }
        }

        return 0;
    }


