#include "binary_trees.h"

/**
 *
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = 0;
	if (tree->parent != NULL)
		depth = 1;
	else
		depth = 0;
	depth += binary_tree_depth(tree->parent);
	return(depth);
}
