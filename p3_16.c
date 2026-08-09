// 16. WAP to insert a number in an array that is already sorted in an ascending order.

#include <stdio.h>

int main() {
    int n, num, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element

    printf("Enter %d elements in ascending order:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert: ");
    scanf("%d", &num);
     
    pos = n; // Default position is at the end of the array
    for(int i=0; i<n; i++) { // 1 2 3 4 5 _
        if(arr[i] > num) {
            pos = i;
            break;
        }
    }

    for(int i=n; i>pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;

    printf("Array after insertion:\n");
    for(int i=0; i<=n; i++) {
        printf("%d ", arr[i]);
    }

}