#include "binary_trees.h"
#include <stdio.h>

/**
 *
 *
 */

int tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = 0;
	if (tree->parent != NULL)
		depth = 1;
	else
		depth = 0;
	depth += tree_depth(tree->parent);
	return(depth);
}

void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level-1, func);
		print_level(tree->right, level-1, func);
	}
}

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int depth, i;

	if (tree == NULL)
		return;

	depth = tree_depth(tree);
	for (i = 1; i <= depth; i++)
		print_level(tree, i, func);
	printf("%d", depth);
}
