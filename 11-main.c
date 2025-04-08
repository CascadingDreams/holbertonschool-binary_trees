#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
	binary_tree_t *root;
	size_t size;

	root = binary_tree_node(NULL, 98);

	root->left = binary_tree_node(root, 50);
	root->right = binary_tree_node(root, 100);

	root->left->left = binary_tree_node(root->left, 40);
	root->left->right = binary_tree_node(root->left, 60);
	root->right->left = binary_tree_node(root->right, 99);
	root->right->right = binary_tree_node(root->right, 110);

	binary_tree_print(root);

	size = binary_tree_size(root);
	printf("Size of %d: %lu\n", root->n, size);

	size = binary_tree_size(root->right);
	printf("Size of %d: %lu\n", root->right->n, size);

	size = binary_tree_size(root->left->right);
	printf("Size of %d: %lu\n", root->left->right->n, size);

	size = binary_tree_size(root->left->left);
	printf("Size of %d: %lu\n", root->left->left->n, size);

	size = binary_tree_size(root->left->right);
	printf("Size of %d: %lu\n", root->left->right->n, size);

	size = binary_tree_size(root->right->left);
	printf("Size of %d: %lu\n", root->right->left->n, size);

	size = binary_tree_size(root->right->right);
	printf("Size of %d: %lu\n", root->right->right->n, size);

	return (0);
}
