#include "tree.h"

extern int status;

// Function to delete the node  //
Tree_t *delete_BST(Tree_t *root, int data)
{
	if (root == NULL) // check tree empty
	{
		return root;
	}
	// check data in left sub tree
	else if (data < root->data)
	{
		// function call
		root->left = delete_BST(root->left, data);
	}
	// check data in right sub tree
	else if (data > root->data)
	{
		// function call
		root->right = delete_BST(root->right, data);
	}
	else
	{

		if (root->left == NULL && root->right == NULL)
		{
			// free root
			free(root);

			// update NULL
			root = NULL;

			status = 1;
		}

		else if (root->left == NULL)
		{
			// update temp with root
			Tree_t *temp = root;

			// update root with root of right
			root = root->right;

			status = 1;

			// free temp
			free(temp);
		}

		else if (root->right == NULL)
		{
			// update temp with root
			Tree_t *temp = root;

			// update root with root of left
			root = root->left;

			status = 1;

			// free temp
			free(temp);
		}

		else
		{

			// Function call to find min in right sub tree and update temp with it
			int temp = findmin(root->right);

			// Update root of data with temp of data
			root->data = temp;

			status = 1;

			// Function call
			root->right = delete_BST(root->right, temp);
		}
	}

	return root;
}
