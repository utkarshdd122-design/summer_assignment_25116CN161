#include<stdio.h>
int main(){
    int x,n;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);
    int result = 1;
    for(int i=1; i<=n; i++){
        result= result* x;
    }
    printf("Result: %d", result);
    return 0;
}