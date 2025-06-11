#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 * If tree is NULL, returns 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /* A NULL tree is not full */
	}

	/* If it's a leaf node, it has 0 children, so it's full */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* If it has both left and right children, recursively check subtrees */
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}

	/* If it has only one child (left or right, but not both), it's not full */
	return (0);
}
