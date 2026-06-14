#include<stdio.h>
int main(){
    int n,i,j; //declare variables
    printf("Enter the number of rows: ");  // prompt user for input
    scanf("%d",&n);
    for(i=1;i<=n;i++){ 
        for(j=1;j<=i;j++){   //ascending number 
            printf("%d ",j);
        }
        for(j=i-1;j>=1;j--){   //descending number
            printf("%d ",j);
        }
        printf("\n");  //print new line after each row
    }
    return 0;
}