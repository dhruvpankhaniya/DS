#include<stdio.h>
#define Max 5

int stack[Max], top = -1;

void PUSH(int value) {
    if(top == Max -1) {
        printf("Stack is overflow\n");
        return ;
    }else{
        top++;
        stack[top] = value ;
        printf("insrted value: %d\n",value); 
    }
}

void pop(){
    if(top == -1) {
        printf("Stack is Underflow\n");
    }else{
        printf("value poped: %d\n",stack[top]);
        top--;
    }
}
void peek() {
    if(top == -1) {
        printf("Stack is Underflow\n");
    }else{
        printf("Top value: %d",stack[top]);
    }
}

void peep(){
    int pos,index;

    if(top == -1) {
        printf("Stack is Underflow\n");
    }else{
        index = Max - pos - 1;
        printf("Top value: %d\n",stack[top]);
    }
}

void change() {
    int pos,index,value;

    if(top == -1) {
        printf("Stack is Underflow\n");
        return ;
    }

    printf("Enter a pos: ");
    scanf("%d",&pos);

    printf("Enter a value: ");
    scanf("%d",&value);

    index = top - pos +1 ;

    if(index<0 || index > Max - 1){
        printf("Enter a valid pos\n");
    }else{
      
        stack[index] = value ;
        printf("replced pos %d with %d",pos, value);
  
    }
}

void display() {
    if(top == -1) {
        printf("Stack is underflow");
        return;
    }else{
        printf("Stack Elmens are:\n");
        for(int i =top; i >=0 ; i--) {
            printf("index: %d, value: %d\n",i,stack[i]);
        }
    }
}
int main(){
    int value ;
    pop();
    PUSH(10);
    PUSH(20);
    PUSH(30);
    PUSH(40);
    PUSH(50);
    pop();
    display();

    peek();
    peep();
        display();

    change();
        display();


    return 0;
}

