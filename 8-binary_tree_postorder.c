#include "binary_trees.h"

/**
 * binary_tree_postorder - post order traversal
 * @tree: the tree node
 * @func: the func
 * Return: the traversed tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
}


