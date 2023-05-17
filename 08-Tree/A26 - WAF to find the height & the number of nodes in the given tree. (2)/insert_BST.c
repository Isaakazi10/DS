#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
    int flag;
    Tree_t *new =malloc(sizeof(Tree_t));
    if(new == NULL)
    {
        return FAILURE;
    }
    new->data=data;
    new->left=NULL;
    new->right=NULL;
    
    if(*root == NULL)
    {
        *root=new;
        return SUCCESS;
    }
    Tree_t *temp = *root;
    Tree_t *parent = temp;
    while(temp)
    {
        parent = temp;
        if(temp->data > data)
        {
            temp=temp->left;
            flag=1;
        }
        else if(data > temp->data)
        {
            temp=temp->right;
            flag=0;
        }
        else
        {
            return DUPLICATE;
        }
    }
    if(flag)
    {
        parent->left=new;
    }
    else
    {
        parent->right=new;
    }
    
}