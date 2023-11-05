#include <stdio.h>

void selectionSort (int arr[], int n)
{
    int min, temp;
    for (int i=0; i<n-1; i++){ //no of passes
    min=i;
    for(int j=i+1; j<n;j++)
    {
        if(arr[min]>arr[j]){
            min=j;

        }
    }
    temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
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
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}