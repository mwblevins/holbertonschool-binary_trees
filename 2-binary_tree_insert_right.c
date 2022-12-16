#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a new node to tree, right side,
 *                              replacing current node as its parent if present
 * @parent: pointer to the parent node
 * @value: data to be stored in the new node
 * Return: pointer to the new node, else NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = new;
		new->parent = parent;
		new->right = NULL;
		new->left = NULL;
		new->n = value;
	}
	else
	{
		temp = parent->right;
		temp->parent = new;
		parent->right = new;
		new->right = temp;
		new->left = NULL;
		new->parent = parent;
		new->n = value;
	}
	return (new);
}
