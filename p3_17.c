// 17. WAP  to  delete  a  number  from  an  array  that  is  already  sorted  in  an  ascending order. 
#include <stdio.h>

int main() {

    int n, num, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Create an array of size n
    printf("Enter the elements of the array in ascending order:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to delete: ");
    scanf("%d", &num);

    pos = -1; // Initialize position to -1 (not found)

    for(int i=0; i<n; i++) {
        if(arr[i] == num) {
            pos = i; // Store the position of the number to delete
            break;
        }
    }

    if(pos == -1) {
        printf("Number not found in the array.\n");
    }else{

        for(int i=pos; i<n;i++) {
            arr[i] = arr[i + 1]; // Shift elements to the left to delete the number
        }
        n--; // Decrease the size of the array
        printf("Number deleted successfully.\n");

        printf("Array after deletion:\n");
        for(int i=0; i<n; i++) {
            printf("%d ", arr[i]);
        }

    }
    return 0;
}