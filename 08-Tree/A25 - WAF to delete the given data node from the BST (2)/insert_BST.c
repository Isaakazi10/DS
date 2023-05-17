#include "tree.h"

// Function to insert the data's in BST //
int insert_into_BST(Tree_t **root, int data)
{
    // create a node
    Tree_t *new = malloc(sizeof(Tree_t));

    // declare a flag variable
    int flag;

    // check node is create successfully
    if (new == NULL)
    {
        return FAILURE;
    }
    // store new of data with data
    new->data = data;

    // store new of left with NULL
    new->left = NULL;

    // store new of right with NULL
    new->right = NULL;

    if (*root == NULL)
    {
        *root = new;
        return SUCCESS;
    }
    // declare variable temp to traverse tree
    Tree_t *temp = *root;

    // declare variable parent to traverse tree
    Tree_t *parent = *root;

    // traverse upto last child
    while (temp)
    {
        parent = temp;

        // condition for to traverse left side of tree
        if (data < temp->data)
        {
            temp = temp->left;
            flag = 1;
        }
        // condition for to traverse right side of tree
        else if (data > temp->data)
        {
            temp = temp->right;
            flag = 0;
        }
        else
            return FAILURE;
    }

    // check condition for flag for left or right side to search
    if (flag)
        parent->left = new;
    else
        parent->right = new;
    return SUCCESS;
}