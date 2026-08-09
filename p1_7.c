// WAP to check whether a number is a Duck Number.
// A Duck Number is a number that contains at least one 0, but does not start with 0.

#include<stdio.h>

int main() {
    int n ,digit ;
    int flag = 0 ;

    printf("Enter a number: ") ;
    scanf("%d",&n) ;

    while (n > 0)
    {
        digit = n % 10 ;
        if(digit == 0) {
            flag = 1;
            break;
        }
        n /= 10 ;
    }

    if(flag == 1 ) {
        printf("Duck number") ;
    }else{
        printf("Not a Duck") ;
    }
    
}
