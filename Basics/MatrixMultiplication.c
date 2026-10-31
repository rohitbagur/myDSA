#include <stdio.h>

int main(){


    int a[3][3] = {{10,20,35}, {22,70,80}, {76,55,67}};
    int b[3][3] = {{1,2,3}, {2,7,8}, {7,5,6}};
    int c[3][3];

    //not doing conditions now as youd have to check col of A == row of B

    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                c[i][j] = 0; // initialize cell before accumulating sum

                for (int k = 0; k < 3; k++) {
                    c[i][j] += a[i][k] * b[k][j];
            }
        }
    }


        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    return 0;
}