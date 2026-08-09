// Stack Operations – Short Description :

// 1. PUSH

// Definition: Inserts (adds) a new element at the top of the stack.

// Follows the LIFO (Last In, First Out) principle.
// If the stack is full, Stack Overflow occurs.

// ----------------------------------------------------------------------------

// 2. POP

// Definition: Removes (deletes) the top element from the stack.

// The deleted element is returned.
// If the stack is empty, Stack Underflow occurs.

// ------------------------------------------------------------------------------

// 3. PEEK

// Definition: Displays the top element of the stack without removing it.

// Only the top element is viewed.
// The stack remains unchanged.

// ------------------------------------------------------------------------------

// 4. PEEP

// Definition: Displays the element at a specified position from the top of the stack without removing it.

// Position is counted from the top.
// The stack remains unchanged.

// -------------------------------------------------------------------------------

// 5. DISPLAY

// Definition: Prints all the elements of the stack from top to bottom.

// Does not remove any element.
// Used to view the entire stack.

// --------------------------------------------------------------------------------

// 6. CHANGE

// Definition: Replaces (updates) the value of an element at a specified position from the top.

// The old value is replaced with a new value.
// No element is inserted or deleted.

//------------------------------------------------------------------------------

#include<stdio.h>

# define Max 5
int stack[Max] ;
int top = -1 ;

void push(int value){
    if(top == Max - 1){
        printf("Stack Overflow\n") ;
        return ;
    }else{
        top++ ;
        stack[top] = value ;
        printf("Inserted %d\n", value) ;    
    }

}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n") ;
        return ;
    }else{
        printf("Deleted %d\n", stack[top]) ;
        top-- ;
    }
}

void peek() {

    if(top == -1) {
        printf("Stack is empty\n") ;
        return ;
    } else {
        printf("Top element is: %d\n", stack[top]) ;
    }
}

void peep() {
    int pos,index ;

    if (top == -1) {
        printf("Stack is empty\n") ;
        return ;
    }
    printf("Enter the position to peep: ") ;   
    scanf("%d", &pos) ;

    index = top - pos +1 ;  

    if(index < 0 || index > top) {
        printf("Invalid position\n") ;
    } else {
        printf("Element at position %d from top is: %d\n", pos, stack[index]) ;
    }
}

void change() {
    int pos,value,index ;

    if(top == -1) {
        printf("Stack is empty\n") ;
        return ;
    }

    printf("Enter the position to change: ") ;
    scanf("%d", &pos) ;

    printf("Enter the new value: ") ;
    scanf("%d", &value) ;
    
    index = top - pos + 1 ;

    if(index < 0 || index > top){
        printf("Invalid Position\n") ;
    }else{
        stack[index] = value ;
        printf("Value at position %d changed to %d\n", pos, value) ;
    }
    
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n") ;
    }else{
        printf("Stack elements are:\n") ;
        for(int i =top; i >= 0; i--) {
            printf("index:%d \t value:%d\n",i, stack[i]) ;
        }
    }
}

void isFull() {
    if(top == Max - 1) {
        printf("Stack is full\n") ;
    } else {
        printf("Stack is not full\n") ;
    }
}

int main() {
    int value ;
    peek() ;
    push(10) ;
    push(20) ;
    push(30) ;
    // peek() ;
    // pop() ;
    push(40) ;
    push(50) ;
    // push(60) ;

    // peep() ;

    // peep() ;

    // pop() ;

    // peek() ;

    change() ;
    change() ;

    display() ;

    isFull() ;

    return 0 ;

}

// POP - Removes the top element.
// PEEK -Views the top element.
// PEEP -Views an element at a specified position from the top.