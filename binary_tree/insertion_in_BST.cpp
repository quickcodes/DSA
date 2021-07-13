#include <stdio.h>
#include <stdlib.h>

// NODE (TREE NODE)
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// FUNCTION (CREATE TREE NOTE)
struct node *createNode(int data)
{
    struct node *n; // CREATING NOTE POINTER
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// FUNCTION (INORDER TRAVERSAL)
void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// FUNCTION (INSERTION)
void insert(struct node* root, int key)
{
    struct node *prev = NULL;
    while(root!=NULL)
    {
        prev = root;
        if(key == root->data)
        {
            printf("Already exist: %d", key);
            return;
        }
        if(key < root->data)
        {
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct node *new_node = createNode(key);
    if(key < prev->data)
    {
        prev->left = new_node;
        printf("Succesfully inserted: %d", key);
    }else
    {
        prev->right = new_node;
        printf("Succesfully inserted: %d", key);
    }
    
}

// FUNCITION (MAIN)
int main()
{
    // MAKING NOTE
    struct node *p = createNode(25);
    struct node *p1 = createNode(20);
    struct node *p2 = createNode(36);
    struct node *p3 = createNode(10);
    struct node *p4 = createNode(5);
    struct node *p5 = createNode(12);
    struct node *p6 = createNode(11);
    struct node *p7 = createNode(15);
    struct node *p8 = createNode(40);
    struct node *p9 = createNode(38);
    struct node *p10 = createNode(48);
    struct node *p11 = createNode(45);

    /*

	BINARY SEARCH TREE REPRESENTATON

	         25
	         |
	        / \
	       20  36
	      /      \
	     10      40
	    / \      / \ 
	   5   12   38  48  
          / \       / 
         11  15    45  


	         P
	        / \
	       P1  P2
	      /     \
	     P3      P8
	    / \      / \ 
	   P4  P5   P9  P10  
          / \       / 
         P6  P7    P11  

	*/

    p->left = p1; // root
    p->right = p2;

    p1->left = p3; // left
    p3->left = p4;
    p3->right = p5;
    p5->left = p6;
    p5->right = p7;

    p2->right = p8;
    p8->left = p9;
    p8->right = p10;
    p10->left = p11;

    printf("Inorder traversal:    ");
    inOrder(p);
    printf("\n");

    insert(p, 7);
    printf("\n");

    printf("Inorder traversal:    ");
    inOrder(p);
    printf("\n");
    return 0;
}