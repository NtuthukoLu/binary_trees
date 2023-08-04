#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - calculate balance factor for tree
 * @tree: root node to calculate balance factor from
 *
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	return (left_height - right_height);
}
