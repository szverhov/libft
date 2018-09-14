/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:06:35 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 13:06:49 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_word(t_arr *arr)
{
	size_t i;

	if (arr == NULL || arr->count_elems == 0)
		return ;
	if (arr->type_size == 1)
	{
		i = 0;
		while (i < arr->count_elems)
		{
			write(1, &((unsigned char*)arr->content)[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
