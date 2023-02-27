#include "binary_trees.h"
/**
 * binary_tree_height - goes through a binary tree using
 * post-order traversal
 * @tree: pointer to binary tree
 * @func: pointer to print function
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = 0, right_height = 0;

		if (tree->left)
			left_height = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);
		if (left_height > right_height)
			return left_height;
		else
			return right_height;
	}
	return 0;
}

/* alternate solution
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left, right;
		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return (left > right ? left : 0);
	}
	return (0);
} */