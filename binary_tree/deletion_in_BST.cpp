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

struct node* inOrderPredecessor(struct node *root)
{
    root= root->left;
    while(root->right != NULL)
    {
        root = root->right;
    }
    return root;
}


// FUNCTION (LEAF NODE DELETION)
struct node *deleteNode(struct node *root, int value)
{
    struct node* iPre;
    if(root == NULL){
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    // Search for the node to be deleted (Recursive search)
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    // Deletion Strategy when the node in founded
    else
    {
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
   return root;
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

    deleteNode(p, 25);
    printf("\n");

    printf("| Root node data : %d |\n", p->data);
    
    printf("Inorder traversal:    ");
    inOrder(p);
    printf("\n");
    return 0;
}