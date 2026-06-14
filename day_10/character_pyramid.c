#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of rows: ");  // prompt user for input
    scanf("%d",&n);
    for(i=1;i<=n;i++){ 
        for(j=0;j<i;j++)  {//print ascending letters
            printf("%c ", 'A' + j);}
            // print decending letters
        for(j=i-2;j>=0;j--){
            printf("%c ", 'A' + j);}
        printf("\n");  //print new line after each row
    }
    return 0;
}