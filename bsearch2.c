// Iterative representation fo binary search
#include <stdio.h>

int bsearch(int arr[], int l, int r, int x){
    while(l <= r){
        int m = l + (r-l)/2;
        if(arr[m] == x)
            return m;
        if(arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main(void){
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 10;
    int result = bsearch(arr, 0, n-1, x);
    (result == -1)? printf("Element not found!\n"): printf("Element present at index %d\n", result);
    return 0;
}
