// 13. WAP to merge two unsorted arrays.

#include<stdio.h>
int main(){
    int n1,n2 ;
    int i;

    printf("Enter size of first array:") ;
    scanf("%d",&n1);

    int a[n1] ;
    printf("Enter elements of first array:") ;
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]);  
    }

    printf("Enter size of Second array:") ;
    scanf("%d",&n2);

    int b[n2] ;
    printf("Enter elements of Second array:") ;
    for(i=0;i<n1;i++) {
        scanf("%d",&b[i]);  
    }

    int c[n1 + n2] ;
    for(i=0 ; i<n1; i++) {
        c[i] = a[i] ;
    }

    for(i=0 ; i<n2; i++) {
        c[n1 + i] = b[i] ;
    }

    printf("After merging two unsorted arrays:") ;
    for(i=0; i< n1+n2; i++) {
        printf("%d ",c[i]) ;
    }
 return 0 ;

}