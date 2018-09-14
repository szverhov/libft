/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_removeind.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 12:58:21 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 18:27:01 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_remove_ind_char(t_arr **arr, size_t index)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	tmp = (char*)malloc(sizeof(char) * ((*arr)->count_elems - index));
	i = index + 1;
	j = 0;
	while (i < (*arr)->count_elems)
	{
		tmp[j] = ((char*)(*arr)->content)[i];
		i++;
		j++;
	}
	(*arr)->count_elems = index;
	i = 0;
	while (i < j)
	{
		ft_add(&(*arr), tmp[i]);
		i++;
	}
}

static void		ft_remove_ind_int(t_arr **arr, size_t index)
{
	int		*tmp;
	size_t	i;
	size_t	j;

	tmp = (int*)malloc(sizeof(int) * ((*arr)->count_elems - index));
	i = index + 1;
	j = 0;
	while (i < (*arr)->count_elems)
	{
		tmp[j] = ((int*)(*arr)->content)[i];
		i++;
		j++;
	}
	(*arr)->count_elems = index;
	i = 0;
	while (i < j)
	{
		ft_add(&(*arr), tmp[i]);
		i++;
	}
}

void			ft_removeind(t_arr **arr, size_t index)
{
	if (arr == NULL || (*arr) == NULL || index >= (*arr)->count_elems)
		return ;
	if ((*arr)->type_size == 4)
		ft_remove_ind_int(&(*arr), index);
	if ((*arr)->type_size == 1)
		ft_remove_ind_char(&(*arr), index);
}
