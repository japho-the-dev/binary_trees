#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - initiates a new node
 * @parent: the parent node to the new node
 * @n: the value of the new node
 * Return: returns the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int  n)
{
	binary_tree_t *newN = malloc(sizeof(binary_tree_t));

	if (!newN)
		return (NULL);

	newN->n = n;
	newN->parent = parent;
	newN->left = newN->right = NULL;

	return (newN);
}
