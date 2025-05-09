#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 *
 * Return: child count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		child = 1;
	}
	child += binary_tree_nodes(tree->left);
	child += binary_tree_nodes(tree->right);

	return (child);
}
