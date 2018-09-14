/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:31:43 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 18:17:38 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t size;
	size_t count;

	if ((size = ft_strlen((char*)little)) == 0)
		return ((char*)big);
	count = 0;
	while (*big != '\0' && len--)
	{
		if (*big != *little && count > 0)
		{
			little -= count;
			big -= count - 1;
			len += count;
			count = 0;
		}
		if (*big == *little)
		{
			count++;
			little++;
		}
		if (count == size)
			return ((char*)big - count + 1);
		big++;
	}
	return (0);
}
