#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node.
 * If node is NULL or the parent is NULL, returns NULL.
 * If node has no sibling (e.g., parent has only one child), returns NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL); /* Node is NULL or has no parent (is root) */
	}

	/* If the node is the left child, its sibling is the right child */
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	/* If the node is the right child, its sibling is the left child */
	else
	{
		return (node->parent->left);
	}
}
