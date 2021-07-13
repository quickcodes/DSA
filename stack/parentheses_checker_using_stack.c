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

// Stack ######################################################
struct stack
{
    int size;
    int top;
    char *arr;
};

// Stack operation's ##########################################
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

void push(struct stack* ptr, char val)
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

char pop(struct stack* ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
//        printf("value of val is %d\n", val);
        return val;
    }
}

// function for parenthesis check ###############################
int paranthesisMatch(char *exp)
{
    // create and initialize stack
    struct stack *sp;
    sp->size = sizeof(exp);
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size*sizeof(char));
    for(int i=0; exp[i] not_equ '\0'; i++)
    {
        if(exp[i] equ '(')
        {
            push(sp, '(');
        }
        else if(exp[i] equ ')')
        {
            if(isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }

    if(isEmpty(sp)){
        return 1;
    }
    return 0;
}

// Main function
int main()
{
    char *exp = "(2*2)+(10/2)";

    if(paranthesisMatch(exp))
    {
        printf("The parenthesis is matching.");
    }
    else{
        printf("The parenthesis is not matching.");
    }

    return 0;
}




