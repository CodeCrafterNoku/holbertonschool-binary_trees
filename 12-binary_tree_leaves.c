#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves.
 *
 * Return: The number of leaves, or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /* A NULL tree has no leaves */
	}

	/* If the node is a leaf (no left or right child), return 1 */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* Recursively sum the leaves from the left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
