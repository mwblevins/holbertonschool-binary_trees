#include "binary_trees.h"

/**
 * binary_tree_nodes - Find count of nodes
 * @tree : Tree to check
 * Return: sum of nodes in children plus one, or 0 if is leaf
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->right) && (!tree->left))
		return (0);
	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + 1);
}
