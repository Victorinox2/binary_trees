#include "binary_trees.h"

/**
 * print - Prints data in a tree node
 * @tree: Pointer to the root node of the tree to be traversed
 * @func: Pointer to the root node of the tree to be traversed
 * @level: levels to traverse till node to print
 * Return: nothing
 */

void print(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL)
		return;
	if (level == 0)
		func(tree->n);
	else if (level > 0)
	{
		print(tree->left, func, level - 1);
		print(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - Goes through a binary tree using
 * level-order traversal
 * @tree: Pointer to the root node of the tree to be traversed
 * @func: Pointer to a function to call for each node.
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i;
	size_t height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
		print(tree, func, i);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (0);
	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((r_height > l_height) ? r_height : l_height);
}
