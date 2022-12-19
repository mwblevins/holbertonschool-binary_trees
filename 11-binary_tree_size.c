#include "binary_trees.h"

/**
 * binary_tree_size - Find size of a tree or subtree
 * @tree : Tree to check
 * Return: size of children + 1
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
