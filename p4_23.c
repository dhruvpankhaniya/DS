// 23. How stack can be used to recognize strings aca, bcb, abcba, abbcbba? WAP to solve the above problem. 

// A stack can be used to recognize a palindrome by pushing the first half of the string into the stack and 
// comparing the remaining half with the characters popped from the stack. 
// If every character matches, the string is a palindrome.


#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
}

char pop()
{
    char ch = stack[top];
    top--;
    return ch;
}

int main() {

    char str[MAX];
    int i,n;

    printf("Enter a String:");
    scanf("%s",str);

    n = strlen(str);

    // Push first Half into Stack
    for(i=0;i<n/2;i++){
        push(str[i]);
    }

    //Skip middle character and compare second half
    for(i=(n+1)/2; i<n; i++){
        if(str[i] != pop()){
            printf("Not Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;

}

