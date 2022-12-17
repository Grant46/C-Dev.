//libreries
#include <stdio.h>

//macro for array
#define N 1000

//top of stack
int top = -1;

//declare array
int stack[N];

//functions
void push();
void pop();

//input
void push(){
    if(top == N-1)
        printf("Overflow !");

    else{
        int x = 10;
        top+=1;
        stack[top] = x;
    }
}

//output
void pop(){
    if(top == -1)
        printf("Underflow !");

    else{
        int x = stack[top];
        printf("\n %d", x);
        top-=1;
    }
    
}

int main(){
    //call functions
    push();
    pop();
}