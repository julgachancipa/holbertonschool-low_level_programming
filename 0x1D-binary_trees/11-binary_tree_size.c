#include "binary_trees.h"

/**
 *
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz;

	if (tree == NULL)
		return (0);
	sz = 0;
	if (tree)
		sz = 1;
	sz += binary_tree_size(tree->left);
	sz += binary_tree_size(tree->right);

	return(sz);
}
