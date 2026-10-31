#include <stdio.h>

int main(){

    int arr[] = {10,12,5,20,15,10,9,22,14,25};

    int largest = arr[0];

    int i = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    while(i < len) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        i++;
    }

    printf("%d", largest);

    return 0;
}