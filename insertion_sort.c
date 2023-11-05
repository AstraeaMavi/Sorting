#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int key, j;
    for(int i=0; i<n-1;i++){ //loop for passes
    key=arr[i];
    j=i-1;
    while(j>=0&& arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sorted Array: \n");
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}