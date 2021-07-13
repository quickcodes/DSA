#include <stdio.h>
#include <stdlib.h>

struct circular_queue
{
	int size;
	int f;   // first
	int r;   // rear
	int* arr;
};

// IS EMPTY
int isEmpty(struct circular_queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

// IS FULL
int isFull(struct circular_queue *q){
    if ((q->r+1)%q->size==q->f)
	{
		return 1;
	}
    return 0;
}

// ENQUEUE 
void enqueue(struct circular_queue *q, int val)
{
    // printf("inside enqueue\n");
    if(isFull(q))
    {
        printf("Queue is full can't enqueue: %d\n", val);
    }
    else
    {
        q->r = (q->r+1)%q->size;
		q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

// DEQUEUE 
int dequeue(struct circular_queue *q)
{
    // printf("inside dequeue\n");
    int val = -1;
    if(isEmpty(q))
    {
        printf("Queue is empty can't dequeue element: %d\n", q->f+1);
    }
    else
    {
        q->f = (q->f+1)%q->size;
		val = q->arr[q->f];
    }
    return val;
}

// IS FULL OR EMPTY
void fullOrEmpty(struct circular_queue &q)
{
	// CHECKING FULL OR EMPTY
    if(isFull(&q)) { printf("Full\n"); }
    if(isEmpty(&q)) { printf("Empty\n"); }
}

int main()
{
	struct  circular_queue q;
	q.size = 4;
	q.f = q.r = 0;
	q.arr = (int*)malloc(q.size*sizeof(int)); q;
	q.size = 4;
	q.f = q.r = 0;
	q.arr = (int*)malloc(q.size*sizeof(int));

	printf("Size of queue is: %d\n", sizeof(q.arr));
    
    fullOrEmpty(q);
    
    printf("eneueuing.... \n");
    
    enqueue(&q, 12);
    enqueue(&q, 14);
    enqueue(&q, 16);
    
    fullOrEmpty(q);

    printf("value of element is: %u\n", q.arr[1]);
    printf("value of element is: %u\n", q.arr[2]);
    printf("value of element is: %u\n", q.arr[3]);
    
    printf("Dequeuing... %d\n", dequeue(&q));
    printf("Dequeuing... %d\n", dequeue(&q));
    printf("Dequeuing... %d\n", dequeue(&q));

    fullOrEmpty(q);

    enqueue(&q, 12);
    enqueue(&q, 14);

    printf("TASK COMPLETE");
    return 0;



}