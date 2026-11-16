#include <stdio.h>

int main(){
    int i,j, size;

    printf("Enter size of List: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");
    for(i = 0; i < size; i++) {
        scanf("%d ", &arr[i]);
    }
    printf("Given array : ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int temp; //Is this just an exchange sort? Genuinely no idea
    for(i = 0; i < size; i++) {
        for(j = i+1; j < size; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        }
    }
    }
    printf("Array after selection sorting: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
}