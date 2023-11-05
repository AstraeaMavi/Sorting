#include <stdio.h>

int parition (int arr[], int low, int high){
    int pivot = arr[low];
    int i =low+1;
    int j=high;
    int temp;
    do{
    while(arr[i]<=pivot){
        i++;
    }
    while (arr[j]>pivot){
        j--;
    }
    if(i<j){
        temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    } while(i<j);
    temp=arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return pivot;
}

void quickSort(int arr[], int low, int high){
    int pos; // index of pivot after parition
    if(low<high){
    pos = parition(arr, low, high); 
    quickSort(arr, low, pos-1); //sort left subarray
    quickSort(arr, pos+1, high); //sort right subarray
    }

}



int main(){
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sorted Array: \n");
    quickSort(arr,0, n-1 );
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}