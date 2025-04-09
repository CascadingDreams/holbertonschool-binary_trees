#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}

/**
 * check_perfect_helper - helper function to check if a tree is perfect
 * @tree: pointer to the node to check
 * @depth: current depth
 * @level: current level of the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int check_perfect_helper(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (check_perfect_helper(tree->left, depth, level + 1) &&
			check_perfect_helper(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = binary_tree_depth(tree);

	return (check_perfect_helper(tree, depth, 0));
}
