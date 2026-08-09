// WAP to insert a number at a given location in an array.

#include<stdio.h>

// int main() {
//     int n,pos,value,i ;

//     printf("Enter the size of the array: ") ;
//     scanf("%d", &n) ;

//     int arr[n+1] ;
//     printf("Enter the elements of the array: ") ;
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]) ;
//     }

//     printf("Enter the position to insert the new element: ") ;
//     scanf("%d", &pos) ;

//     if(pos < 0 || pos > n+1) {
//         printf("Invalid position\n") ;
//         return 0 ;
//     }

//     printf("Enter the value to insert: ") ;
//     scanf("%d", &value) ;
//     for(i = n; i >=pos; i--) {
//         arr[i] = arr[i-1] ;
//     }

//     arr[pos - 1] = value ;
//     n++ ;

//     printf("Array after insertion: ") ;
//     for(i = 0; i <n; i++) {
//         printf("%d ", arr[i]) ;
//     }

// }

// int main() {
//     int n,pos,value,i ;

//     printf("Enter the size of the array: ") ;
//     scanf("%d", &n) ;

//     int arr[n] ;
//     printf("Enter the elements of the array: ") ;
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]) ;
//     }

//     printf("Enter the position to Delete the element: ") ;
//     scanf("%d", &pos) ;

//     if(pos < 0 || pos > n) {
//         printf("Invalid position\n") ;
//         return 0 ;
//     }


//     for(i=pos-1; i<n-1; i++) {
//         arr[i] = arr[i+1] ;
//     }
//     n--;

//     printf("After deleting the Eleement1\n") ;
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]) ;
//     }

// }