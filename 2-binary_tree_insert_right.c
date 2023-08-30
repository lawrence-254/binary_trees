#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child = (binary_tree_t *)malloc(
			sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!right_child)
		return (NULL);
	right_child->parent = parent;
	right_child->n = value;
	right_child->left = NULL;

	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		parent->right = right_child;
	}else{
		right_child->right = NULL;
	}
	parent->right = right_child;
	return (right_child);
}
