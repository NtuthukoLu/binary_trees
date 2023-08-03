#include "binary_trees.h"
#include "5-binary_tree_is_root.c"
/**
 * binary_tree_depth - gets the depth of a node in abinary tree
 * @tree: root node to draw height from for tree
 *
 * Return: size_t representing height, 0 on failure or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || binary_tree_is_root(tree))
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
