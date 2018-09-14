/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:31:43 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 18:35:12 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_arr	*ft_newarrint(size_t count)
{
	t_arr *res;

	if ((res = (t_arr*)malloc(sizeof(t_arr))) == NULL)
		return (NULL);
	if ((res->content = (int*)malloc(sizeof(int) * count)) == NULL)
		return (NULL);
	res->type_size = sizeof(int);
	res->count_elems = 0;
	res->content_size = count;
	return (res);
}

static t_arr	*ft_newarrchar(size_t count)
{
	t_arr *res;

	if ((res = (t_arr*)malloc(sizeof(t_arr))) == NULL)
		return (NULL);
	if ((res->content = (unsigned char*)malloc(sizeof(char) * count)) == NULL)
		return (NULL);
	res->type_size = sizeof(char);
	res->count_elems = 0;
	res->content_size = count;
	return (res);
}

t_arr			*ft_newarr(size_t count, const char *type)
{
	t_arr *res;

	res = NULL;
	if (count <= 0 || type == NULL)
		return (NULL);
	if (ft_strequ(type, "char") == 1)
		return (ft_newarrchar(count));
	if (ft_strequ(type, "int") == 1)
		return (ft_newarrint(count));
	return (NULL);
}
