#include "binary_trees.h"
#include <stdlib.h> /* For malloc */

/**
 * binary_tree_insert_right - Inserts a node as the right-child.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is
 * NULL. If parent already has a right-child, the new node takes its place,
 * and the old right-child is set as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL); /* Parent cannot be NULL */
	}

	/* Create the new node using the existing binary_tree_node function */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if node creation fails */
	}

	/* If parent already has a right-child */
	if (parent->right != NULL)
	{
		/* New node's right points to old right-child */
		new_node->right = parent->right;
		/* Old right-child's parent is now new node */
		parent->right->parent = new_node;
	}

	parent->right = new_node; /* Parent's right now points to the new node */

	return (new_node);
}
