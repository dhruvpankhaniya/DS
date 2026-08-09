#include<stdio.h>

int main() {
    int n ;
    int i=0 ;
    int binary[30] ;

    printf("Enter a number") ;
    scanf("%d", &n);

    while (n > 0)
    {
        binary[i] = n % 2 ;
        n = n / 2 ;
        i++ ;
    }

    for (i = i- 1 ; i>=0 ; i--)
    {
        printf("%d ", binary[i]) ;
    }
    
    
}