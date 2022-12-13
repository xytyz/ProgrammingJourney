#include <stdio.h>

int smallestBiggest(int *arr, int *smallest, int *largest ){
    int i, max=arr[0], min=arr[0], h = sizeof(arr);;
    for (i = 0; i < h; i++) {
            if (min > arr[i]) 
                min = arr[i];
            if (max < arr[i])
                max = arr[i];
    }
    *smallest = min;
    *largest = max;
    return 0;
}

int main(){
    int arr[]={0,2,3,1,8};
    int smallest,largest;
    printf("Array is ");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) 
        printf(" %d",arr[i]);
    printf("\n");
    smallestBiggest(arr,&smallest,&largest);
    printf("smallest num is %d and the largest num is %d \n",smallest,largest);
}