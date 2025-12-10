#include "binary_trees.h"

/**
 * binary_tree_height - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth.
 * 
 * return : Depth of the node, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
