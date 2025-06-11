#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 * If node is NULL, returns 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0); /* A NULL node is not a leaf */
	}

	/* A node is a leaf if both its left and right children are NULL */
	if (node->left == NULL && node->right == NULL)
	{
		return (1); /* Node is a leaf */
	}

	return (0); /* Node is not a leaf (it has at least one child) */
}
