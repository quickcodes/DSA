#include<stdio.h>
#include<stdlib.h>
#define p printf
#define s scanf
#define greater >
#define smaller <
#define and &&
#define gtreqe >=
#define smleq <=
#define equ ==
#define not_equ !=

struct stack
{
    int size;
    int top;
    int *arr;
};

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));

    if(isEmpty(s)){
        printf("The stack is empty\n");
    }
    else{
        printf("The stack is not empty\n");
    }
    push(s, 25);
    push(s, 30);
    push(s, 35);
    if(isEmpty(s)){
        printf("The stack is empty\n");
    }
    else{
        printf("The stack is not empty\n");
    }


    printf("----------------------\n");
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!

    return 0;

}

// Stack operation's

int isEmpty(struct stack* ptr)
{
    if(ptr->top equ -1){
        return 1;
    }
    return 0;
}

int isFull(struct stack* ptr)
{
    if(ptr->top equ (ptr->size-1))
    {
        return 1;
    }
    return 0;
}

void push(struct stack* ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack* ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
//        printf("value of val is %d\n", val);
        return val;
    }
}


