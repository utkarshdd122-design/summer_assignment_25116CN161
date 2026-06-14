#include<stdio.h>   
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n){ // check if the current position is on the border of the square
                printf("* "); // print a star followed by a space for better visibility
            }
            else{
                printf("  "); // print two spaces to create the hollow effect
            }
        }
        printf("\n"); // move to the next line after printing each row
    }
    return 0;
}