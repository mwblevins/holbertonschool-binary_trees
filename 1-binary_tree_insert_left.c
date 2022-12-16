#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds a new node at "left" from parent
 * @parent: parent node
 * @value: value to be stored in the new node
 * Return: Null if malloc fails or parent is NULL,
 *             pointer to the new node otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		parent->left = new;
	}
	else
	{
		temp = parent->left;
		temp->parent = new;
		new->n = value;
		new->parent = parent;
		new->left = parent->left;
		parent->left = new;
		new->right = NULL;
	}
	return (new);
}
