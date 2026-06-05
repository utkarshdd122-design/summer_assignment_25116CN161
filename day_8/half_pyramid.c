#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows: ");// print the number of rows for the half pyramid
    scanf("%d",&n);
    for(i=1;i<=n;i++){ // loop for the number of rows
        for(j=1;j<=i;j++){ // loop for the number of columns in each row
            printf("* "); // print the star followed by a space for better visibility
        }
        printf("\n");// print a new line after each row
    }
    return 0;
}