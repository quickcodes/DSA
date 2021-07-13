#include <stdio.h>
#include <stdlib.h>

/*
                                                     
                        NOTE REPRESENTATION       
                                                           
                     --------------------------
                    | POINTER | DATA | POINTER |                
                     --------------------------
                        /                   \              
                       /                     \                    
     --------------------------      --------------------------   
    | POINTER | DATA | POINTER |    | POINTER | DATA | POINTER |   
     --------------------------      --------------------------   
        /                  \            /                  \             
       /                    \          /                    \    

                                                                       
*/

// NODE (TREE NODE)
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

// FUNCTION (CREATE TREE NOTE)
struct node* createNode(int data)
{
	struct node* n;		// CREATING NOTE POINTER
	n = (struct node*)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}

// FUNCTION (PREORDER TRAVERSAL)
void preOrder(struct node * root)
{
	if (root != NULL)
	{
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}

}

// FUNCTION (POSTORDER TRAVERSAL)
void postOrder(struct node* root){
	if (root != NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ",root->data);
	}
}

// FUNCTION (INORDER TRAVERSAL)
void inOrder(struct node* root){
	if (root != NULL)
	{
		inOrder(root->left);
		printf("%d ",root->data);
		inOrder (root->right);
	}
}

// FUNCITION (MAIN)
int main()
{
	// MAKING NOTE
	struct node *p = createNode(4);
	struct node *p1 = createNode(1);
	struct node *p2 = createNode(6);
	struct node *p3 = createNode(5);
	struct node *p4 = createNode(2);
	// struct node *p5 = createNode(9);

	/*

	BINARY TREE REPRESENTATON

	       4
	      / \
	     1   6
	    / \ 
	   5   2

	*/

	p->left = p1;
	p->right = p2;
	p1->left = p3;
	p1->right = p4;

	printf("Preorder traversal:   ");
	preOrder(p);
	printf("\n");

	printf("Postorder traversal:  ");
	postOrder(p);
	printf("\n");

	printf("Inorder traversal:    ");
	inOrder(p);
	printf("\n");

	return 0;
}