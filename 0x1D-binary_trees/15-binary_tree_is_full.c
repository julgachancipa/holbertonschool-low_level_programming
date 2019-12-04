#include "binary_trees.h"

/**
 *
 *
 */

int emma_cansona_con_muchas_funciones(const binary_tree_t *tree)
{
	int f;

	f = 1;
	if (!tree)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		f = 0;
	if (tree->left == NULL && tree->right == NULL)
		f = 1;
	if (tree->left != NULL && tree->right != NULL)
		f = 1;

	f *= emma_cansona_con_muchas_funciones(tree->left);
	f *= emma_cansona_con_muchas_funciones(tree->right);

	return (f);
}

/**
 *
 *
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (emma_cansona_con_muchas_funciones(tree));
}
