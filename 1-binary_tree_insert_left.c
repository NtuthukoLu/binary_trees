#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node to the left of parent
 * @parent: parent node to insert child under
 * @value: value to create new node data
 *
 * Return: pointer to new binary tree node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Node;

	if (!parent)
		return (NULL);

	new_Node = parent->left;

	parent->left = binary_tree_node(parent, value);
	if (!parent->left)
		return (NULL);

	parent->left->left = new_Node;
	if (new_Node)
		new_Node->parent = parent->left;
	return (parent->left);
}
