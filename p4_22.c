// 22. Write a menu driven program to implement following operations on the Stack
// using an Array
// PUSH, POP, DISPLAY, PEEP, CHANGE

#include <stdio.h>

#define max 50

int stack[max];
int top = -1;

void push()
{
    if (top == max - 1)
    {
        printf("Stack is Overflow\n");
        return;
    }

    int value;

    printf("Enter Element for insertion: ");
    scanf("%d", &value);

    top++;
    stack[top] = value;

    printf("Value inserted: %d\n", value);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Underflow\n");
        return;
    }

    printf("Popped from Top of Stack: %d\n", stack[top]);

    top--;
}

void peep()
{
    if (top == -1)
    {
        printf("Stack is Underflow\n");
        return;
    }

    int pos;

    printf("Enter a position to peep: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > top + 1)
    {
        printf("Enter a valid position\n");
        return;
    }

    int index = top - pos + 1;

    printf("Element at position %d from top is: %d\n",
           pos, stack[index]);
}

void change()
{
    if (top == -1)
    {
        printf("Stack is Underflow\n");
        return;
    }

    int pos, value;

    printf("Enter a position: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > top + 1)
    {
        printf("Enter a valid position\n");
        return;
    }

    int index = top - pos + 1;

    printf("Enter a value to change: ");
    scanf("%d", &value);

    stack[index] = value;

    printf("Element changed successfully\n");
}

void display()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Elements of Stack:\n");

    for (int i = top; i >= 0; i--)
    {
        printf("Index: %d, Value: %d\n", i, stack[i]);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n\n----- STACK MENU -----\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. PEEP\n");
        printf("5. CHANGE\n");
        printf("6. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                peep();
                break;

            case 5:
                change();
                break;

            case 6:
                printf("Exited...");
                return 0;

            default:
                printf("Invalid Choice");
        }
    }

    return 0;
}