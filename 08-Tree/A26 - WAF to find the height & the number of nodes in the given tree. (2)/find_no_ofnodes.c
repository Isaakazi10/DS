#include "tree.h"

int total_nodes(Tree_t *root)
{
    if (root == NULL) 
    {
        // An empty tree has height 0
        return 0;
    } 
    else 
    {
        // Recursively calculate the height of the left and right subtrees
        int left_height = find_height(root->left);
        int right_height = find_height(root->right);
        
        // Return the maximum of the two subtree heights plus one for the root node
        return 1 + (left_height + right_height);
    }
}
