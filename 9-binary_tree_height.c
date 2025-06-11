#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* If left child exists, calculate its height (+1 for the edge) */
	if (tree->left != NULL)
	{
		left_h = 1 + binary_tree_height(tree->left);
	}

	/* If right child exists, calculate its height (+1 for the edge) */
	if (tree->right != NULL)
	{
		right_h = 1 + binary_tree_height(tree->right);
	}

	/* The height of the current node is the maximum of left_h and right_h */
	if (left_h > right_h)
	{
		return (left_h);
	}
	else
	{
		return (right_h);
	}
}
