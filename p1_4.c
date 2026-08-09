// WAP to count the frequency of each digit in a number.

#include<stdio.h>

int main() {
    int n, digit;
    int freq[10] = {0};
     
    printf("Enter a num: ") ;
    scanf("%d", &n) ;

    while (n > 0)
    {
        digit = n % 10 ;
        freq[digit]++ ;
        n = n / 10 ;
    }

    printf("\nDigit\tFrequency\n");

    for (int i=0 ; i<10 ; i++) {

       if (freq[i] > 0)
        {
            printf("%d\t%d\n", i, freq[i]);
        }
    }
    return 0 ;
}