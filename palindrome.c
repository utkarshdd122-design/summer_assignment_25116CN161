#include<stdio.h>
int main(){
    int n, rev=0,d,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while(n!=0){
            d = n % 10;
            rev = rev * 10 + d;
            n = n / 10;
        }
    if(temp == rev){
        printf("The number is a palindrome.\n");
    }
    else{
        printf("The number is not a palindrome.\n");
    }
    return 0;
}