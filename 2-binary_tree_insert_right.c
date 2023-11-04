#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to node to insert the right-child in.
 * @value: The value to store in new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to new node.
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              right-child of the new node.
 */
