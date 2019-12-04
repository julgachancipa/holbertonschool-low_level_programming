#include "binary_trees.h"

/**
 *
 *
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *emm, *pocoyo;

	if (first == NULL || second == NULL)
		return NULL;

	for (emm= first; emm; emm = emm->parent)
	{
		for (pocoyo=second; pocoyo; pocoyo = pocoyo->parent)
		{
			if (emm->n == pocoyo->n)
				return ((binary_tree_t *)emm);
		}
	}
	return (NULL);
}
