#include<stdio.h>
int main(){
    int arr[100],n,i,largest,smallest;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    smallest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("The largest element of the array is: %d\n",largest);
    printf("The smallest element of the array is: %d\n",smallest);
    return 0;
}