#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


// print linked list
void LinkedListTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf(" Element is -> %d\n", ptr->data);
        ptr = ptr->next;
    }
}


// Insert at first
struct Node * insertAtFirst(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
};


// Insert at Index
struct Node * insertAtIndex(struct Node * head, int data, int index)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;
    while(i!= (index-1))
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
};


// Insert at End
struct Node * insertAtEnd(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
};


// Insert after Node
struct Node * insertAfterNode(struct Node * head,struct Node * previousNode, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = previousNode->next;
    previousNode->next = ptr;

    return head;
};


void main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Memory allocation
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

//  By the way,
//  head->data is equivalent to (*head).data
//  head->next is equivalent to (*head).next
    // header
    head->data = 13;
    head->next = second;
    // link btw 1 or 2
    second->data = 45;
    second->next = third;
    // link btw 2 or 3
    third->data = 73;
    third->next = fourth;
    // link btw 2 or 3
    fourth->data = 98;
    fourth->next = NULL;

    printf("Linked list before insertion.\n");
    LinkedListTraversal(head);
    printf("\n");
    //head = insertAtFirst(head,9);
    //head = insertAtIndex(head,9,3);
    //head = insertAtEnd(head , 40);
    head = insertAfterNode(head , second , 37);
    printf("\nLinked list before insertion.\n");
    LinkedListTraversal(head);

    getch();
}
