#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * 
 * return : 0 if tree is NULL. 
 * 			left_height or right_height for the height of the tree.
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	left_height = height(tree->left);
	
	if (tree->right)
	right_height = height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));	
}
