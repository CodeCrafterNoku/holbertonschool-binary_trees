#include "binary_trees.h"

/**
 * _binary_tree_height_recursive - Measures the height of a binary tree.
 * Helper function for binary_tree_balance.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or -1 if tree is NULL.
 */
static int _binary_tree_height_recursive(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
	{
		return (-1); /* Height of a NULL tree is -1 */
	}

	left_h = _binary_tree_height_recursive(tree->left);
	right_h = _binary_tree_height_recursive(tree->right);

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
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the tree's root node to measure.
 *
 * Return: Balance factor (height_left - height_right), or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /* Balance factor of a NULL tree is 0 */
	}

	/* Balance factor is height of left subtree - height of right subtree */
	return (_binary_tree_height_recursive(tree->left) -
		_binary_tree_height_recursive(tree->right));
}
