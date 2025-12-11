#include "binary_trees.h"

/**
 * check_depth - Computes the depth of the leftmost leaf
 * @tree: Pointer to the tree
 *
 * Return: Depth of the leftmost leaf
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
 * check_perfect - Checks recursively if a tree is perfect
 * @tree: Pointer to the current node
 * @depth: Depth of the leaves
 * @level: Current level in the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
static int check_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (check_perfect(tree->left, depth, level + 1)
			&& check_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	depth = check_depth(tree);

	return (check_perfect(tree, depth, 1));
}
