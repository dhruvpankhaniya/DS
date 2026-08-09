// 11.WAP to delete a number from a given location in an array.

#include<stdio.h>

int main() {
    int n,pos ;

    printf("Enter size of array:") ;
    scanf("%d",&n) ;
 
    int a[n] ;
    printf("Enter element of array: ") ;
    for(int i=0; i<n;i++) {
        scanf("%d",&a[i]) ;
    }

    printf("Enter position of element:") ;
    scanf("%d",&pos);

    int i ;
    for (i = pos-1; i < n-1; i++)
    {
       a[i] = a[i+1];
    }
    n-- ;

    printf("after deleting a element\n") ;
    for(i=0; i<n; i++) {
        printf("%d ",a[i]) ;
    }

return 0 ;
    
}