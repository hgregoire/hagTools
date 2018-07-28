#include <stdlib.h>
#include <stdio.h>
#include  "bTree.h"

/*
  printTree , display the left side of the tree
*/
void printTree( struct node* root ) {
	struct node* currentNode= root;
	
	while ( currentNode!= NULL ) { 
		printf("	 | \n" ) ; 
		printf("	[%d] \n", currentNode->data ) ; 
		printf("       /    \\ \n") ; 
		currentNode = currentNode->left; 
	}

}

/* newNode() allocates a new node with the given data and NULL left and
   right pointers. */
struct node* newNode(int data)
{
  // Allocate memory for new node
  struct node* node = (struct node*)malloc(sizeof(struct node));

  // Assign data to this node
  node->data = data;

  // Initialize left and right children as NULL
  node->left = NULL;
  node->right = NULL;
  return(node);
}

