#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t rootSize, leftSize, rightSize;

	if (tree == NULL)
	{
		return (0);
	}
	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);

	rootSize = leftSize + rightSize + 1;

	if (tree->parent == NULL)
	{
		return (rootSize);
	}
	if (tree->left)
		return (leftSize + 1);
	else
		return (rightSize + 1);
}
