// Recursive implementation of binary search search
#include <stdio.h>

int bsearch(int arr[], int l, int r, int x){
    if(r >=l){
        int mid = l +  (r - l)/2;
        if(arr[mid] == x) return mid;
        if(arr[mid] > x) return bsearch(arr, l, mid - 1, x);
        return bsearch(arr, mid+1, r, x);
    }
    return -1;
}

int main(void){
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 10;
    int result = bsearch(arr, 0, n-1, x);
    (result == -1)? printf("Element not present!\n"): printf("Element present at index %d\n", result);
    return 0;
}
