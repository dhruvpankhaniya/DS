//24. WAP to determine if an input character string is of the form aibi where i >= 1 
// i.e., Number of ‘a’ should be equal to number of ‘b’.

#include<stdio.h>
#define max 20
int stack[max];
int top = -1;

void push(char ch) {
    top++;
    stack[top]= ch;
}
char pop() {
    char ch = stack[top];
    top --;
    return ch ;
}

int main() {
    char str[max];
    printf("Enter a string: ");
    scanf("%s",str);
    int i=0;

    while(str[i] == 'a'){
        push(str[i]);
        i++;
    }
    while(str[i] == 'b'){
        if(top == -1){
            printf("Invalid");
            return 0;
        }
        pop();
        i++;
    }

    if(top == -1 && str[i] == '\0'){
        printf("valid");
    }else{
        printf("Invalid");
    }
    return 0;

}