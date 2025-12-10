# Binary Trees Project

This project is part of the Holberton School low-level programming curriculum.  
It focuses on implementing a variety of operations on binary trees, understanding
their structure, and applying fundamental data structure concepts such as recursion,
tree traversal, balance, and node relationships.

## Learning Objectives

By the end of this project, you should be able to explain, without using Google:

### General Concepts
- What a binary tree is  
- The difference between a **binary tree** and a **Binary Search Tree (BST)**
- The advantages of trees in terms of time complexity compared to linked lists
- Definitions of **depth**, **height**, and **size** in a binary tree
- Different traversal methods: **pre-order**, **in-order**, and **post-order**
- What makes a tree:
  - **complete**
  - **full**
  - **perfect**
  - **balanced**

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation:

  gcc -Wall -Werror -Wextra -pedantic -std=gnu89

## Data Structures 

/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

## Tasks Overview (0-18)

Task			Function					Description
 0			binary_tree_node			Creates a new binary tree node
 1			binary_tree_insert_left		Inserts a node as the left child
 2			binary_tree_insert_right	Inserts a node as the right child
 3			binary_tree_delete			Deletes an entire binary tree
 4			binary_tree_is_leaf			Checks if a node is a leaf
 5			binary_tree_is_root			Checks if a node is the root
 6			binary_tree_preorder		Pre-order traversal
 7			binary_tree_inorder			In-order traversal
 8			binary_tree_postorder		Post-order traversal
 9			binary_tree_height			Measures the height of a tree
10			binary_tree_depth			Measures the depth of a node
11			binary_tree_size			Counts all nodes
12			binary_tree_leaves			Counts leaf nodes
13			binary_tree_nodes			Counts non-leaf nodes
14			binary_tree_balance			Computes balance factor
15			binary_tree_is_full			Checks if tree is full
16			binary_tree_is_perfect		Checks if tree is perfect
17			binary_tree_sibling			Finds a node's sibling
18			binary_tree_uncle			Finds a node's uncle

## Print Function

A helper file binary_tree_print.c was provided to visualize trees.
This file is for debugging only and should not be pushed to the repository.

## Compilation Example

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 binary_tree_print.c <task-file>.c main.c -o binary_tree_exec

## Usage Exemple

binary_tree_t *root;

root = binary_tree_node(NULL, 98);
root->left = binary_tree_node(root, 12);
root->right = binary_tree_node(root, 402);

binary_tree_print(root);

# OUTPUT

   .-------(098)-------.
  (012)             (402)

## Resources

Recommended reading/watching:

		-“Binary Tree” (not to be confused with B-Trees)

		-Data Structures & Algorithms – Trees

		-Tree Traversal techniques

		-Binary Search Trees

		-Full, complete, perfect, and balanced trees

		-General concepts about tree depth and height

## Authors
This project was collaboratively developed by:

- **Aythan**  
- **Killian**

as part of the Holberton School Low-Level Programming track.
