// 19. WAP to print Pascal triangle

#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = rows - 1; j >= i; j--) {
            printf(" "); // Print spaces for formatting
        }
  
        int number = 1; // The first number in each row is always 1
        for (int j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1); // Calculate the next number in the row
        }
        printf("\n");
    }

    return 0;
}