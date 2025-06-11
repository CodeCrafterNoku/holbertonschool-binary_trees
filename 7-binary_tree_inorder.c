#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 *
 * Return: void.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return; /* Do nothing if tree or func is NULL */
	}

	/* 1. Recursively traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* 2. Visit the current node (call func on its value) */
	func(tree->n);

	/* 3. Recursively traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
