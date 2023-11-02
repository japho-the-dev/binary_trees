#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a new node on the left of the parent
 * @parent: the parent of the new node
 * @value: the value of the new node
 * Return: returns the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newN = NULL;

	if (!parent)
		return (NULL);

	newN = binary_tree_node(parent, value);
	if (!newN)
		return (NULL);

	newN->left = parent->left;
	parent->left = newN;
	if (newN->left)
		newN->left->parent = newN;

	return (newN);
}
