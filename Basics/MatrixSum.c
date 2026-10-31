#include <stdio.h>

int main(){

    int a[3][3] = {{10,20,35}, {22,70,80}, {76,55,67}};
    int b[3][3] = {{1,2,3}, {2,7,8}, {7,5,6}};
    int c[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j <3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Matrix A: \n");
    for(int i = 0; i < 3; i++){
       for(int j = 0; j <3; j++) {
           printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B: \n");
    for(int i = 0; i < 3; i++){
       for(int j = 0; j <3; j++) {
           printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("Matrix C = A + B \n");
    for(int i = 0; i < 3; i++){
       for(int j = 0; j <3; j++) {
           printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}