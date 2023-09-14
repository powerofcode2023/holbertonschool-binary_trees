#include "binary_trees.h"

/**
 * binary_tree_balance - checks the balance of a tree
 * @tree: binary tree
 *
 * Return: size of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int rHeight = 0, lHeight = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lHeight = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rHeight = binary_tree_height(tree->right) + 1;
	return (lHeight - rHeight);
}
