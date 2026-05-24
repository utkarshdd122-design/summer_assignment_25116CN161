#include<stdio.h>
int main(){
    int n, product=1 , d;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
   
         d = n % 10;
        //  if(d % 2 == 0) { // to product only even digits
            product = product * d;
       // }
        n = n / 10;
    }
    printf("Product of digits is: %d\n",product);
    return 0;
}