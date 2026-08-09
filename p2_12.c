// 12. WAP to delete duplicate numbers from an array.


#include<stdio.h>

int main() {
    int n ;

    printf("Enter size of array:") ;
    scanf("%d",&n) ;
 
    int a[n] ;
    printf("Enter element of array: ") ;
    for(int i=0; i<n;i++) {
        scanf("%d",&a[i]) ;
    }

    int i,j,k ;
    for (i = 0; i < n; i++)
    {
        for(j=i+1; j<n; j++) {
            if(a[i] == a[j]) {
                for(k=j; k< n-1; k++){
                    a[k] = a[k+1];
                }
            n--;
            j--;
            }
        }
    }

    printf("after deleting a duplicate element\n") ;
    for(i=0; i<n; i++) {
        printf("%d ",a[i]) ;
    }

return 0 ;
    
}