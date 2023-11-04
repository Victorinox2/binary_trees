#include "binary_trees.h"

/**
 * is_full - Checks if a binary tree is full
 * @tree:  Pointer to the root node of the tree to be checked
 * Return: 1 if true else 0
 */
int is_full(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (is_full(tree->left) && is_full(tree->right));
	return (0);

}
