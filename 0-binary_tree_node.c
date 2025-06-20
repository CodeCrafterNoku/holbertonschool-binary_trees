#include "binary_trees.h"
#include <stdlib.h> /* For malloc */

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if malloc fails */
	}

	new_node->n = value;    /* Set the value of the new node */
	new_node->parent = parent; /* Set the parent pointer */
	new_node->left = NULL;  /* New node starts with no left child */
	new_node->right = NULL; /* New node starts with no right child */

	return (new_node);
}
