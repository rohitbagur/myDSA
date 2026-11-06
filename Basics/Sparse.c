#include <stdio.h>
#define MAX 10

struct Term {
    int row;
    int col;
    int val;
};

void readMat(int a[MAX][MAX], int r, int c) {
    int i,j;

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

int sparse(int a[MAX][MAX], int r, int c, struct Term s[]) {
    int i,j,k = 0;

    for(i = 0; i< r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] != 0) {
                s[k].row = i;
                s[k].col = j;
                s[k].val = a[i][j];
                k++;
            }
        }
    }
    return k;
}

void display(struct Term s[], int n) {
    printf("\t Row \t Column \t Value\n");
    for(int i = 0; i < n; i++) {
        printf("\t %d \t %d \t %d \n", s[i].row, s[i].col, s[i].val);
    }
}

void add(int a[MAX][MAX],int b[MAX][MAX], int r, int c, struct Term sum[]) {
    int i,j,k = 0;

    for(i = 0; i< r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] + b[i][j] != 0) {
                sum[k].row = i;
                sum[k].col = j;
                sum[k].val = a[i][j] + b[i][j];
                k++;
            }
        }
    }
    printf("\n Sparse Representation of Sum: \n");
    display(sum, k);
}

void trans(struct Term s[], int n, int c) {

    struct Term t[100];
    int i,j,k = 0;

    for(j = 0; j < c; j++) {
        for(i = 0; i < n; i++) {
            if(s[i].col == j) {
                t[k].row = s[i].col;
                t[k].col = s[i].row;
                t[k].val = s[i].val;
                k++;
            }
        }
    }
    printf("\n Sparse Representation of Transpose: \n");
    display(t, k);
}

int main(){

    int a[MAX][MAX], b[MAX][MAX];
    int r,c, ch;
    int n1;

    struct Term s1[100], sum[100];
    printf("Enter Rows and Columns: ");
    scanf("%d", &r);
    scanf("%d", &c);

    printf("Enter MAtrix A: \n");
    readMat(a,r,c);
    printf("Enter MAtrix b: \n");
    readMat(b,r,c);

    n1 = sparse(a,r,c,s1);

    do {
    printf("\n1. Display Sparse Matrix A");
    printf("\n2. Add Sparse Matrices");
    printf("\n3. Transpose Sparse Matrix A");
    printf("\n4. Exit");

    printf("\nEnter choice: ");
    scanf("%d", &ch);

    switch (ch) {
    
        case 1:
            display(s1, n1);
            break;
        case 2:
            add(a, b, r, c, sum);
            break;
        case 3:
            trans(s1, n1,c);
            break;
        case 4:
            printf("Program Ended\n");
            break;
        default:
            printf("Invalid Choice\n");
    }
    } while (ch != 4);

    return 0;
    }