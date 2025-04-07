# Binary Trees

This repository provides a collection of C functions to create, manipulate, and traverse binary trees. It supports basic binary trees, as well as data structures derived from them such as Binary Search Trees (BST), AVL trees, and Max Binary Heaps.

## Features

- Create binary tree nodes
- Insert left and right child nodes
- Delete binary trees
- Traverse trees (preorder, inorder, postorder)
- Measure tree properties:
  - Height
  - Depth
  - Size
  - Number of leaves
  - Number of nodes
- Check tree properties:
  - Leaf node
  - Root node
  - Full tree
  - Perfect tree
  - Balance factor
- Identify siblings and uncles

## Data Structures

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;   /* Binary Search Tree */
typedef struct binary_tree_s avl_t;   /* AVL Tree */
typedef struct binary_tree_s heap_t;  /* Max Binary Heap */
```

## Usage

To use the binary tree functions:

1. Include `binary_trees.h` in your source file.
2. Compile your code with `gcc`:

```bash
gcc -Wall -Wextra -Werror -pedantic your_file.c binary_tree_functions.c -o your_program
```

## Author

CascadingDreams