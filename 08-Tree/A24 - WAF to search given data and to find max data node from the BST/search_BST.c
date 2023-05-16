#include "tree.h"

/* Iteratively */
int search_BST(Tree_t *root, int data)
{
    // if root is equal to NULL return FAILURE.
    if (root == NULL)
    {
        return FAILURE;
    }

    // While root is not equal to NULL keep running the loop
    while (root)
    {
        // If root->data is equal to data them return SUCCESS
        if (root->data == data)
        {
            return SUCCESS;
        }
        // Else if data is greater than root of data
        else if (data > root->data)
        {
            // Then update the root to its right pointer
            root = root->right;
        }
        // else
        else
        {
            // Then update the root to its left pointer
            root = root->left;
        }
    }

    // If the data is not found return NOELEMENT.
    return NOELEMENT;
}