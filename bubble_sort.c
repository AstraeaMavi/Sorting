#include <stdio.h>


void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++)//for the number of passes
    {
        for(int j=0; j< n-1-i; j++) //for comparison in each pass
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int main(){
    int n;
    printf("enter the number of elements: \n");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sorted Array: \n");
    bubbleSort(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}