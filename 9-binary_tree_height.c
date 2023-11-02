#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: the tree whose height is calculated
 *
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t h_l = 0, h_r = 0;

		h_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		h_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((h_l > h_r) ? h_l : h_r);
	}
	return (0);
}
