#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int a=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=a; j++){
            printf("%d ",j);// print the current value of j followed by a space for better visibility
        }
        a--;

        printf("\n");
    }
    return 0;
}