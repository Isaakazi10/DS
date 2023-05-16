#include "tree.h"

int findmax(Tree_t *root)
{
    // if root is equal to NULL return FAILURE.
    if (root == NULL)
    {
        return FAILURE;
    }

    // While root is not equal to NULL keep running the loop.
    while (root != NULL)
    {
        // if root of right is equal to NULL return root of data
        if (root->right == NULL)
        {
            return root->data;
        }

        // Update the root.
        root = root->right;
    }
}