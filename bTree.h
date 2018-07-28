struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void printTree( struct node* root );
struct node* newNode(int data);


