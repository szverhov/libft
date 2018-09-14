/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:05:40 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 13:06:09 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print(t_arr *arr)
{
	size_t i;

	if (arr == NULL)
		return ;
	i = 0;
	if (arr->type_size == sizeof(char))
		while (i < arr->count_elems)
		{
			ft_putchar('[');
			ft_putchar(((char*)arr->content)[i]);
			write(1, "] ", 2);
			i++;
		}
	if (arr->type_size == 4)
		while (i < arr->count_elems)
		{
			ft_putchar('[');
			ft_putnbr(((int*)arr->content)[i]);
			write(1, "] ", 2);
			i++;
		}
	ft_putchar('\n');
}
