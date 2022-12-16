#include "binary_trees.h"

/**
 * binary_tree_node - creates a new child node for binary_tree_t
 * @parent: pointer to parent node
 * @value: data to be stored in the new node
 * Return: NULL if failed, or pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
