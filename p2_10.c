// 10. WAP to insert a number at a given location in an array

#include<stdio.h>
int main() {
    int n ,pos , element ;

    printf("Enter a size of array:") ;
    scanf("%d",&n) ;
    int a[n];

    printf("Enter array Elements:") ;
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);

    }

    printf("Enter position of element:") ;
    scanf("%d",&pos);

    printf("Enter element that you  want to insert:") ;
    scanf("%d",&element);

    int i;
    n++ ;
    for(i=n; i>=pos; i--) {
        a[i] = a[i-1] ;
    }
    a[i] = element ;

    printf("after inserted a element\n") ;
    for(i=0; i<n; i++) {
        printf("%d ",a[i]) ;
    }

return 0 ;

}