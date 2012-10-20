#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    Node *parent,*left,*right;
    int key;
#ifndef TEST
    void *satellite;/*satellite data*/ 
#endif
}Node;

typedef struct tree{
    Node *root=NULL;
    int count_node=0;/*counter of node*/
}Tree;

/*Operations on the binary search tree*/
Node *predecessor(Tree *tree);
Node *successor(Tree *tree);
int insert(Tree *tree,Node *node);
Node *search(Tree *tree,Node *node);
int delete_node(Tree *tree,Node *node);
Node *minimum(Tree *tree);
Node *maximum(Tree *tree);

