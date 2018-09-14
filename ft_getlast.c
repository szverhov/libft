/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 12:59:25 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 12:59:41 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getlast(t_arr *arr)
{
	if (arr == NULL || arr->count_elems == 0)
		return (0);
	if (arr->type_size == 4)
		return (((int*)arr->content)[arr->count_elems - 1]);
	if (arr->type_size == 1)
		return (((unsigned char*)arr->content)[arr->count_elems - 1]);
	return (0);
}
