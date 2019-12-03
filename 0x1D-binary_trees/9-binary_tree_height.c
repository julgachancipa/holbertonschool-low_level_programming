#include "binary_trees.h"

/**
 *
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
		return (2);
	else if (tree->left || tree->right)
		return (1);
	else
		return (0);
}
