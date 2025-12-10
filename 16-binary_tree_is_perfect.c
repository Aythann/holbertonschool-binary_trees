#include "binary_trees.h"

/**
 * check_depth - finds the depth of leaves
 * @tree: pointer to the root node of the tree to check
 *
 * Return: depth of tree
 */
static int check_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * check_perfect - check if the tree is perfect recursively
 * @tree: pointer to the current node
 * @depth: depth of leaves
 * @level: level in tree
 *
 * Return: 1 if perfect and 0 if NULL
 */
static int check_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)	
		return (depth == level);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (check_perfect(tree->left, depth, level + 1) && check_perfect(tree->right, depth, level + 1));	
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	depth = check_depth(tree);

	return (check_perfect(tree, depth, 1));
}
