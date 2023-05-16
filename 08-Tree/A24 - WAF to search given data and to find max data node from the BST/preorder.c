#include "tree.h"

/* Function to print the tree in pre order */
int preorder(Tree_t *root)
{
    // If root is equal to NULL then return 0.
    if (root == NULL)
    {
        return 0;
    }

    // Printing the root of data
    printf("%d ", root->data);
    // Calling inorder function and giving it argument of root of left until root is NULL
    preorder(root->left);
    // Calliing inorder function and giving it argument of root of right until root is NULL
    preorder(root->right);
}