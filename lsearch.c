#include <stdio.h>

int lsearch(int arr[], int num, int element){
    for(int i=0; i<num; i++)
        if(arr[i] == element)
            return i;
    return -1;
}

int main(void){
    int var, x, n, a[20];
    printf("Please enter the number of elements : ");
    scanf("%d", &n);
    printf("Please enter the sorted array of elements : ");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Please enter the element to be searched : ");
    scanf("%d", &x);
    var = lsearch(a, n, x);
    if(var == -1)
        printf("The element is not in the array\n");
    else
        printf("The element is in the position : %d\n", var+1);
    return 0;
}
