#include "binary_trees.h"
#include "14-binary_tree_balance.c"
/**
 * binary_tree_is_full - checks if a binary tree is full or not
 * @tree: root node to check if tree is full from
 *
 * Return: (1) if binary tree is full (0) on anything else
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
