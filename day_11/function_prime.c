#include<stdio.h>
int is_prime(int n){
    if(n<=1)
        return 0; // Not prime
    for(int i=2; i*i<=n; i++){
        if(n%i==0)
            return 0; // Not prime
    }
    return 1; // Prime
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(is_prime(n))
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    return 0;
}