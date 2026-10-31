#include <stdio.h>

int main(){

    int arr[] = {10,12,5,20,15,10,9,22,14,25};
    
    int sum = 0;
    for(int i = 0; i <= 10; i++)
        sum += arr[i];

    printf("%d", sum);

    return 0;
}