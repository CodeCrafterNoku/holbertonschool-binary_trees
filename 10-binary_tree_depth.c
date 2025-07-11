#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* If tree is NULL or it's the root (parent is NULL), depth is 0 */
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	/* The depth of a node is 1 + the depth of its parent */
	return (1 + binary_tree_depth(tree->parent));
}
