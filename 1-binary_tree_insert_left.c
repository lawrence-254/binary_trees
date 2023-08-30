#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as
 * the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node or NULL on failure or if
 * parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child_ptr;
	binary_tree_t *left_child;

	if (!parent)
		return (NULL);
	left_child = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!left_child)
		return (NULL);

	left_child->n = value;
	left_child->left = NULL;
	left_child->right = NULL;

	if (parent->left != NULL)
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
	}
	parent->left = left_child;
	left_child->parent = parent;

	left_child_ptr = left_child;
	return (left_child_ptr);
}
