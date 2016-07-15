#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int n){
    for(int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void){
    int arr[] = {23, 21, 12, 34, 67, 54, 66, 53, 100, 87, 54};
    int n = sizeof(arr)/ sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array : ");
    printArray(arr, n);
    return 0;
}
