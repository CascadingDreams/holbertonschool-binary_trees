#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child
 * @parent: pointer to node to insert child in
 * @value: value to store in new_node
 *
 * Return: pointer to new node or NULL if failed.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}
	else
	{
		parent->right = new_node;
	}
	return (new_node);
}
