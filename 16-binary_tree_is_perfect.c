#include "binary_trees.h"

/**
 * tree_stats - measures the height and size of a tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
size_t tree_stats(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = tree_stats(tree->left);
	r = tree_stats(tree->right);

	if (l > r)
		return (l + 1);
	return (r + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 if not or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree_stats(tree->left);
	right_h = tree_stats(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		if (left_h == right_h)
		{
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
		}
	}

	return (0);
}
