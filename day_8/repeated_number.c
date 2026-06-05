#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i); // print the current row number followed by a space for better visibility
        }
        printf("\n"); // move to the next line after printing each row
    }
    return 0;
}