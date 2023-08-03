#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node from parent
 * @parent: parent to create child from
 * @value: value of the node, data to store
 *
 * Return: pointer to new node OR (NULL) on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Node;

	new_Node = malloc(sizeof(binary_tree_t));
	if (!new_Node)
		return (NULL);

	new_Node->parent = parent;
	new_Node->n = value;
	new_Node->left = NULL;
	new_Node->right = NULL;

	return (new_Node);
}

