/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:04:05 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 13:04:36 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_intsort(t_arr **arr)
{
	size_t	i;
	int		tmp;

	if (arr == NULL || (*arr) == NULL || (*arr)->count_elems <= 1)
		return ;
	if ((*arr)->type_size == 4)
	{
		i = 0;
		while (i < (*arr)->count_elems)
		{
			if (((int*)(*arr)->content)[i] > ((int*)(*arr)->content)[i + 1] &&
			i + 1 < (*arr)->count_elems)
			{
				tmp = ((int*)(*arr)->content)[i];
				((int*)(*arr)->content)[i] = ((int*)(*arr)->content)[i + 1];
				((int*)(*arr)->content)[i + 1] = tmp;
				i = -1;
			}
			i++;
		}
	}
}
