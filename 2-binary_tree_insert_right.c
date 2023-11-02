#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the parent of the new node
 * @value: the value of the new node
 * Return: returns the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newN = NULL;

	if (!parent)
		return (NULL);

	newN = binary_tree_node(parent, value);
	if (!newN)
		return (NULL);

	newN->right = parent->right;
	parent->right = newN;
	if (newN->right)
		newN->right->parent = newN;

	return (newN);
}
