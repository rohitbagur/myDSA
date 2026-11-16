#include <stdio.h>

void search(int key, int arr[], int size) {
    int low = 0; 
    int high = size-1 ;
   
    while(low <= high) {

    int mid = (low + high) / 2;
    if(arr[mid] == key) {
        printf("Found key at position %d", mid);
        return;
    }

    else if(key > arr[mid]) {
        low = mid + 1;
    }

    else if(key < arr[mid]){
        high = mid - 1;
    }
        
    
    }
    printf("Does not exist in given list");
    return;
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

    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
        }
    }
    }

    printf("Enter element to be searched: ");
    scanf("%d", &k);

    search(k, arr, size);

    return 0;
}