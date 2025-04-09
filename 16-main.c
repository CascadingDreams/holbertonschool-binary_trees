#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int perfect;

    root = binary_tree_node(NULL, 70);


    root->left = binary_tree_node(root, 50);
    root->right = binary_tree_node(root, 90);


    root->left->left = binary_tree_node(root->left, 40);
    root->left->right = binary_tree_node(root->left, 60);
    root->right->left = binary_tree_node(root->right, 80);
    root->right->right = binary_tree_node(root->right, 110);


    root->left->left->left = binary_tree_node(root->left->left, 35);
    root->left->left->right = binary_tree_node(root->left->left, 45);
    root->right->left->left = binary_tree_node(root->right->left, 75);
    root->right->left->right = binary_tree_node(root->right->left, 85);
    root->right->right->left = binary_tree_node(root->right->right, 105);
    root->right->right->right = binary_tree_node(root->right->right, 120);

    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n", perfect);

    return (0);
}