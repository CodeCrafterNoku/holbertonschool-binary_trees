#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node.
 * If node is NULL, returns NULL.
 * If node has no uncle (no parent, or parent has no sibling), returns NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL); /* Node is NULL or has no parent (no uncle) */
	}

	/* The uncle is the sibling of the node's parent */
	return (binary_tree_sibling(node->parent));
}
