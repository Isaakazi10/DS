#include "tree.h"

int findmin(Tree_t *root)
{
    // if root is equal to NULL return FAILURE.
    if (root == NULL)
    {
        return FAILURE;
    }

    // While root is not equal to NULL keep running the loop.
    while (root != NULL)
    {
        // if root of left is equal to NULL return root of data
        if (root->left == NULL)
        {
            return root->data;
        }
        // Update the root.
        root = root->left;
    }
}