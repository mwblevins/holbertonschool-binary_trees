#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree using recursion
 * @tree: the root node of the tree to be free'd
 * Return: Return
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
