// 15. WAP to check whether a given number is a Happy Number or not.

//A Happy Number is a number that eventually becomes 1 when you repeatedly replace it with the sum of the squares of its digits.

#include<stdio.h>

int main(){
    int n,digit,sum ,temp;

    printf("Enter a num:") ;
    scanf("%d",&n) ;

    while (n != 1 && n != 4)
    {
        sum=0;
        temp = n;

        while (temp >0)
        {
            digit = temp % 10 ;
            sum = sum + (digit * digit) ;
            temp = temp / 10 ;
        }
        n = sum ;
    }
    if(n == 1) {
        printf("Happy number");
    }else{
        printf("Not a happy num") ;
    }
    
}