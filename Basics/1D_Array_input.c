#include <stdio.h>

int main(){

    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    int len = sizeof(arr) / sizeof(arr[0]);


    for (int i = 0; i < len ; i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Array entered is: ");
    printf("[ ");
    for (int i = 0; i < len ; i++)
  
    {
        printf("%d ", arr[i]);
        
    }
    printf("]");

    return 0;
}
