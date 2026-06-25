#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    float avg;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=(float)sum/n;
    printf("The sum of the elements of the array is: %d\n",sum);
    printf("The average of the elements of the array is: %.2f\n",avg);
    return 0;
}