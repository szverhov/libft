/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:02:26 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 13:02:32 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_get(t_arr *arr, size_t index)
{
	if (arr == NULL || arr->count_elems == 0 || arr->count_elems <= index)
		return (0);
	if (arr->type_size == 4)
		return (((int*)arr->content)[index]);
	if (arr->type_size == 1)
		return (((unsigned char*)arr->content)[index]);
	return (0);
}
