#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree.
 *
 * @tree: pointer to the root node fo the tree to measure the size
 * Return: integer size of the tree, or 0 on error
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	size += 1;
	return (size);
}
