// 18. WAP to merge two sorted arrays

#include <stdio.h>

int main() {
   int n1,n2 ;

   printf("Enter size of first array: ");
   scanf("%d",&n1);

    printf("Enter size of second array: ");
    scanf("%d",&n2);

    int arr1[n1],arr2[n2],arr3[n1+n2];

    printf("Enter elements of first array in ascending order:\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter elements of second array in ascending order:\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    int i=0; int j=0; int k=0;

    while(i<n1 && j<n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        }else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i<n1) {
        arr3[k]= arr1[i];
        i++;
        k++;
    }

    while(j<n2) {
        arr3[k]= arr2[j];
        j++;
        k++;
    }

    printf("Merged sorted array:\n");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",arr3[i]);
    }

}