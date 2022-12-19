#include "binary_trees.h"

/**
 * binary_tree_depth - Find heightdepth of a node
 * @tree : Tree to check
 * Return: depth of parent + 1
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
