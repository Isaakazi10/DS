#include "tree.h"

/* Function to print the data in in order printing */
int inorder(Tree_t *root)
{
    // If root is equal to NULL then return 0.
    if (root == NULL)
    {
        return 0;
    }

    // Calling inorder function and giving it argument of root of left until root is NULL
    inorder(root->left);
    // Printing the root of data
    printf("%d ", root->data);
    // Calliing inorder function and giving it argument of root of right until root is NULL
    inorder(root->right);
}