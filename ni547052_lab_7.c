#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int g, h, counter = 0;
    for (g = 0; g < n - 1; g++) {
        for (h = 0; h < n - g - 1; h++) {
            if (arr[h] > arr[h + 1]) {
                swap(&arr[h], &arr[h + 1]);
                counter++;
            }
        }
    printf("pass #%d: %d\n", g+1, counter);
    counter = 0;  
    }    
}


int main(){

    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(arr, 9);
    return 0;
}