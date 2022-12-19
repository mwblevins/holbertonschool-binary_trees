#include "binary_trees.h"

/**
 * binary_tree_leaves - Find count of leaves
 * @tree : Tree to check
 * Return: sum of leaves in children, or 1 if is leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->right) && (!tree->left))
		return (1);
	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
