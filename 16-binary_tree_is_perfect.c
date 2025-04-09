#include "binary_trees.h"

/**
 * binary_tree_depth_simple - measures the depth of a node
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth
 */
size_t binary_tree_depth_simple(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree != NULL && tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to node
 *
 * Return: 1 if full and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;
	int left_node, right_node;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_depth = binary_tree_depth_simple(tree->left);
	right_depth = binary_tree_depth_simple(tree->right);

	if (left_depth != right_depth)
		return (0);

	left_node = binary_tree_is_perfect(tree->left);
	right_node = binary_tree_is_perfect(tree->right);

	if (left_node && right_node)
		return (1);

	return (0);
}
