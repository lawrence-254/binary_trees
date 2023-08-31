#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_left, n_right, count;

	if (!tree)
		return (0);

	n_left = binary_tree_nodes(tree->left);
	n_right = binary_tree_nodes(tree->right);
	count = (n_right + n_left);

	if ((tree->left || tree->right))
		return (count + 1);

	return (count);
}
