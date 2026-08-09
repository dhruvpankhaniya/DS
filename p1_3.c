// 3. WAP to count the number of digits, sum of digits and product of digits of a number.

#include<stdio.h>

int main() {
    int n,temp,digit;
    int count=0,sum=0,product=1 ;
    int sumCount=0,productCount=0 ;

    printf("Enter a number") ;
    scanf("%d", &n) ;

    temp = n ;
    while (temp > 0)
    {
        digit = temp % 10 ;
        count ++ ;

        sum = sum + digit ;
        product = product * digit ;

        temp = temp / 10 ;
    }

    temp = sum ;
    while (temp > 0)
    {
        sumCount++ ;
        temp /= 10 ; 
    }

    temp = product ;
    while (temp > 0)
    {
        productCount++ ;
        temp /= 10 ; 
    }
    
    printf("\nDigits in Number = %d", count);
    printf("\nSum = %d", sum);
    printf("\nDigits in Sum = %d", sumCount);
    printf("\nProduct = %d", product);
    printf("\nDigits in Product = %d", productCount);

}