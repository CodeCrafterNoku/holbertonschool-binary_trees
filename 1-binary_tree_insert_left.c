#include "binary_trees.h"
#include <stdlib.h> /* For malloc */

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure or if parent
 * is NULL. If parent already has a left-child, the new node takes its place,
 * and the old left-child is set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	/* If parent already has a left-child */
	if (parent->left != NULL)
	{
		new_node->left = parent->left; /* New node's left points to old left-child */
		/* Old left-child's parent is now new node */
		parent->left->parent = new_node;
	}

	parent->left = new_node; /* Parent's left now points to the new node */

	return (new_node);
}
