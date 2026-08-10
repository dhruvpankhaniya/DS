// 1. WAP to print the Fibonacci series up to n terms

#include<stdio.h>

int main () {
    int n ;
    printf("ENter a number") ;
    scanf("%d",&n) ;

    int first =0 ,sec= 1;
    int next ;

    for(int i=0; i<=n; i++) {

        printf("%d ", first);
        next = first + sec ;
        first = sec ;
        sec = next ;
    }
}