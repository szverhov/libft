/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addinx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 12:55:48 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 18:24:56 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_arr_add_ind_int(t_arr **arr, size_t index, int elem)
{
	int		*tmp;
	size_t	i;
	size_t	j;

	tmp = (int*)malloc(sizeof(int) * ((*arr)->count_elems - index));
	i = index;
	j = 0;
	while (i < (*arr)->count_elems)
	{
		tmp[j] = ((int*)(*arr)->content)[i];
		i++;
		j++;
	}
	((int*)(*arr)->content)[index] = elem;
	(*arr)->count_elems = index + 1;
	i = 0;
	while (i < j)
	{
		ft_add(&(*arr), tmp[i]);
		i++;
	}
}

static void			ft_arr_add_ind_char(t_arr **arr, size_t index, int elem)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	tmp = (char*)malloc(sizeof(char) * ((*arr)->count_elems - index));
	i = index;
	j = 0;
	while (i < (*arr)->count_elems)
	{
		tmp[j] = ((char*)(*arr)->content)[i];
		i++;
		j++;
	}
	((char*)(*arr)->content)[index] = elem;
	(*arr)->count_elems = index + 1;
	i = 0;
	while (i < j)
	{
		ft_add(&(*arr), tmp[i]);
		i++;
	}
}

void				ft_addinx(t_arr **arr, size_t index, int elem)
{
	if (arr == NULL || (*arr) == NULL || index >= (*arr)->count_elems)
		return ;
	if ((*arr)->type_size == 4)
		ft_arr_add_ind_int(&(*arr), index, elem);
	if ((*arr)->type_size == 1)
		ft_arr_add_ind_char(&(*arr), index, elem);
}
