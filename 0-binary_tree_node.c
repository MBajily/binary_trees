#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 *
 * @parent: is a pointer to the parent node of the node to create.
 * @value: is the value to put in the new node.
 *
 * Return: NULL When created, a node does not have any child.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);

	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;

	return (new_tree);
}
