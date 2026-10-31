#include <stdio.h>

int main() {

    int arr[] = {1,2,3,4,5};
    printf("%d \n", sizeof(arr)); //returns thew bytes it stores

    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < len ; i++)
        printf("%d ", arr[i]);

        return 0;
}