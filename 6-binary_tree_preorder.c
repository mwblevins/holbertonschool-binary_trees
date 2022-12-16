#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree in preorder, using recursion
 * @tree: pointer to root node of tree to traverse
 * @func: a function to pass data to while traversing
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		if (tree->left != NULL)
			binary_tree_preorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_preorder(tree->right, func);
	}
}
