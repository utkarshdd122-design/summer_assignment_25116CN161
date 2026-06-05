#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1; // initialize a variable to keep track of the current number to be printed
        for(j=1;j<=i;j++){
            int d=a+64; // calculate the ASCII value of the current character to be printed
            char ch=(char)d; // convert the ASCII value to a character
            printf("%c ",ch);
            a++; // increment the variable to get the next number for the next character
        }
        printf("\n");
    }
    return 0;
}