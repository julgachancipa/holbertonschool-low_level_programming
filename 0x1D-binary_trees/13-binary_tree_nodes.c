#include "binary_trees.h"

/**
 *
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);
	nodes = 0;
	if (tree->left || tree->right)
		nodes = 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return(nodes);
}
