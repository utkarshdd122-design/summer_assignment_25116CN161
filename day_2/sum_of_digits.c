#include<stdio.h>
int main(){
    int n, sum = 0, d;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
   
         d = n % 10;
        //  if(d % 2 == 0) { // to sum only even digits
            sum = sum + d;
       // }
        n = n / 10;
    }
    printf("Sum of digits is: %d\n",sum);
    return 0;
}
