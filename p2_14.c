// 14. WAP to check whether two numbers are co-prime or not.
//  Two numbers are co-prime if their Greatest Common Divisor (GCD) is 1.
#include<stdio.h>

int main() {
    int a,b,i,gcd =1 ;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b) ;

    int min;
    if(a <b){
        min = a;
    }else{
        min = b;
    }

    for(i=1; i<=min; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i ;
        }
    }
    if(gcd == 1) {
         printf("Co-Prime Numbers");
    }else{
        printf("Not Co-Prime Numbers");
    }

    return 0;
    }
