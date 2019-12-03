#include "binary_trees.h"
#include <stdio.h>
/**
 *
 *
 */

int leaves(const binary_tree_t *tree)
{
	int l;
	if (tree == NULL)
		return (0);
	l = 0;
	if (tree->left == NULL && tree->right == NULL)
		l = 1;
	l += leaves(tree->left);
	l += leaves(tree->right);

	return(l);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance, l_lt, l_rt;

	if (tree == NULL)
		return (0);
	l_lt = leaves(tree->left);
	l_rt = leaves(tree->right);

	balance = l_lt - l_rt;
	return (balance);
}
