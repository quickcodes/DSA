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


// Deliting first          // case 1
struct Node * deleteFirst(struct Node * head)
{
    struct Node * ptr = head ;//(struct Node *) malloc(sizeof(struct Node));
    head = head->next;
    free(ptr);
    return head;
};


// delete from Index        // case 2
struct Node * deleteAtIndex(struct Node * head, int index)
{

    struct Node * p = head;
    struct Node * q = head->next;
    int i=0;
    while(i< (index-1))
    {
        p = p->next;
        q = q->next;

        i++;
    }

    p->next = q->next;
    free(q);

    return head;
};


// delete End        // case 3
struct Node * deletetEnd(struct Node * head)
{
    struct Node * p = head;
    struct Node * q = head->next;

    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
};


// deleting the element with a given value  from the linked list        // case 4
struct Node * deleteFromIndex(struct Node * head, int value)
{
    struct Node * p = head;
    struct Node * q = head->next;

    while(q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data==value){
        p->next = q->next;
        free(q);
    }
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
    //head = deleteFirst(head);            // case 1
    //head = deleteAtIndex(head,3);        // case 2
    //head = deletetEnd(head );            // case 3
    //head = deleteFromIndex(head , 73);   // case 4
    printf("\nLinked list before insertion.\n");
    LinkedListTraversal(head);

    getch();
}