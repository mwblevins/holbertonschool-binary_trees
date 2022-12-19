#include "binary_trees.h"

/**
 * binary_tree_height - Find height of a tree
 * @tree : Tree to check
 * Return: Height of children + 1
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree || ((!tree->right) && (!tree->left)))
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l < r)
		l = r;
	return (l + 1);
}
