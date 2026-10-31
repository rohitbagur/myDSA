#include <stdio.h>

int main(){

    int r1, c1, r2, c2;

    printf("Enter Rows and Columns for Matrix A: \n");
    scanf("%d", &r1);
    scanf("%d", &c1);

    printf("Enter Rows and Columns for Matrix B: \n");
    scanf("%d", &r2);
    scanf("%d", &c2);

    if(c1 != r1) {
        printf("Matrix mulitplication cannot occur for the given two matrixces");
    }

    
}