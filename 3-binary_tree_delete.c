#include "binary_trees.h"
#include <stdlib.h> /* For free */

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Return: void.
 * If tree is NULL, do nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return; /* Do nothing if the tree pointer is NULL */
	}

	/* Recursively delete the left subtree */
	binary_tree_delete(tree->left);

	/* Recursively delete the right subtree */
	binary_tree_delete(tree->right);

	/* Free the current node */
	free(tree);
}
