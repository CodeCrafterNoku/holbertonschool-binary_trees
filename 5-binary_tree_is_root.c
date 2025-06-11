#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a root, otherwise 0.
 * If node is NULL, returns 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* A node is a root if it exists and its parent is NULL */
	if (node != NULL && node->parent == NULL)
	{
		return (1); /* Node is a root */
	}

	return (0); /* Node is NULL, or it has a parent (not a root) */
}
