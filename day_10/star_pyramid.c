#include<stdio.h>
int main(){
    int n,i,j,k ; //declare variables
    printf("Enter the number of rows: ");  // prompt user for input
    scanf("%d",&n);
    for(i=1;i<=n;i++){ //loop for each row
        for(j=i;j<n;j++){   //loop for printing spaces
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++){  //loop for printing stars
            printf("*");
        }
        printf("\n");  //print new line after each row
    }
    return 0;  //return 0 to indicate successful execution
}