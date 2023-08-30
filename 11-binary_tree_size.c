#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;
	size_t depth;

	if (!tree)
		return (0);

	left_depth = binary_tree_size(tree->left);
	right_depth = binary_tree_size(tree->right);
	depth = (right_depth + left_depth + 1);
	return (depth);
}
