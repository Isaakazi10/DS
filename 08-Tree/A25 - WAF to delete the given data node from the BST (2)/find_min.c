#include "tree.h"

// function prototype for findminimum
int findmin(Tree_t *root)
{
    // repeate a loop for child reached to NULL
    while (root->left != NULL)
    {
        // move the root to root to left
        root = root->left;
    }
    // return the data
    return root->data;
}
