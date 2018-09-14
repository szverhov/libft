/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 12:54:50 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 18:24:07 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_arr	*make_bigger(t_arr **old, int elem)
{
	t_arr	*new;
	size_t	i;

	i = 0;
	if ((*old)->type_size == 1)
		new = ft_newarr((*old)->count_elems * 2, "char");
	else if ((*old)->type_size == 4)
		new = ft_newarr((*old)->count_elems * 2, "int");
	while (i < ((*old)->type_size * (*old)->count_elems))
	{
		((unsigned char*)(new->content))[i] =
		((unsigned char*)((*old)->content))[i];
		i++;
	}
	new->count_elems = (*old)->count_elems;
	ft_add(&new, elem);
	free((*old));
	return (new);
}

void			ft_add(t_arr **arr, int elem)
{
	if ((*arr) == NULL || arr == NULL)
		return ;
	if ((*arr)->content_size == (*arr)->count_elems)
	{
		(*arr) = make_bigger(&(*arr), elem);
		return ;
	}
	if ((*arr)->type_size == 4)
	{
		((int*)(*arr)->content)[(*arr)->count_elems] = elem;
		(*arr)->count_elems++;
	}
	if ((*arr)->type_size == 1)
	{
		((unsigned char*)(*arr)->content)[(*arr)->count_elems] = elem;
		(*arr)->count_elems++;
	}
}
