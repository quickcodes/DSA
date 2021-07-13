#include<stdio.h>
#include<iso646.h>
#define p printf
#define s scanf


struct Node{
    int data;
    struct node *next;
};

void Traversion(struct Node *head){
    struct Node *ptr = head;

    do{
        p("element is %d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr not_eq head);
}

struct Node *insertionAtFirst(struct Node *head , int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while(p->next not_eq head){
        p = p->next;
    }
    // ab p last node ko points kr rha h
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return(head);
};

void main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fifth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 5;
    head->next = first;

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = head;

    p("Before inseretion\n");
    Traversion(head);
    p("After inseretion\n");
    head  = insertionAtFirst(head , 4);
    Traversion(head);

}
