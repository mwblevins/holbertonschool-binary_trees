#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse Tree
 * @tree: Head of tree
 * @func: Function to call on each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	if (!tree || !func)
		return;
	/* 1 */
	binary_tree_postorder(tree->left, func);
	/* 2 */
	binary_tree_postorder(tree->right, func);
	/* 3 */
	func(tree->n);
}
