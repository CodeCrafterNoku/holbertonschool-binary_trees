#include "binary_trees.h"

/**
 * _binary_tree_height_perfect - Measures the height of a binary tree.
 * Helper function used by binary_tree_is_perfect.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */
static size_t _binary_tree_height_perfect(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_h = _binary_tree_height_perfect(tree->left);
	right_h = _binary_tree_height_perfect(tree->right);

	if (left_h > right_h)
	{
		return (1 + left_h);
	}
	else
	{
		return (1 + right_h);
	}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 * If tree is NULL, returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /* A NULL tree is not perfect */
	}

	/* If it's a leaf node, it's perfect */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* If it has only one child, it's not perfect (not full) */
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	/* Check if subtrees are perfect AND have the same height */
	if (_binary_tree_height_perfect(tree->left) ==
	    _binary_tree_height_perfect(tree->right))
	{
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0); /* Heights are different, not perfect */
}
