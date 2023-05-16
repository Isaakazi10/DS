#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
    // If root is equal to NULL Then create a new_node and store that in root and return SUCCESS.
    if (*root == NULL)
    {
        Tree_t *new_node = create(data);
        if (new_node == NULL)
        {
            return FAILURE;
        }
        *root = new_node;
        return SUCCESS;
    }
    else
    {
        // Create a temp pointer and store root in it.
        Tree_t *temp = (*root);

        // While TRUE
        while (1)
        {
            // If data is less than temp of data then execute if-statement

            if (data < temp->data)
            {
                // if temp of left is equal to NULL
                if (temp->left == NULL)
                {
                    // Then create new_node and update its data and store new_node in temp of left
                    Tree_t *new_node = create(data);
                    if (new_node == NULL)
                    {
                        return FAILURE;
                    }
                    temp->left = new_node;
                    return SUCCESS;
                }

                // Else update the the temp
                temp = temp->left;
            }
            // If data is More than temp of data then execute else-if-statement
            else if (data > temp->data)
            {
                // if temp of left is equal to NULL
                if (temp->right == NULL)
                {
                    // Then create new_node and update its data and store new_node in temp of left
                    Tree_t *new_node = create(data);
                    if (new_node == NULL)
                    {
                        return FAILURE;
                    }
                    temp->right = new_node;
                    return SUCCESS;
                }
                // Else update the the temp
                temp = temp->right;
            }
            // Else return DUPLICATE
            else
            {
                return DUPLICATE;
            }
        }
    }
}

// Function to create a new_node.
Tree_t *create(int data)
{
    Tree_t *new_node = malloc(sizeof(Tree_t));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}