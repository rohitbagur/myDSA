#include <stdio.h>

void search(int key, int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            printf("Item %d is present at position %d", key, i+1);
            return;
        }
        
    } 
    printf("Item %d is not present", key);
}

int main(){

    int size, k;

    printf("Enter number of elements to be stored: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements into array: \n");

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        printf(" ");
    }

    printf("Enter element to be searched: ");
    scanf("%d", &k);

    search(k, arr, size);

    return 0;
}