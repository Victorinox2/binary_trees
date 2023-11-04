#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a binary tree left
 * @tree: Pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node after rotation
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *piv tree->right, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	tmp = piv->left;
	piv->left = tree;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = piv;
	piv->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = piv;
		else
			tmp->right = piv;
	}
	return (piv);
}
