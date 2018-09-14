/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:31:43 by szverhov          #+#    #+#             */
/*   Updated: 2017/10/31 16:34:14 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int len;
	int count;

	len = ft_strlen((char*)little);
	if (len == 0)
		return ((char*)big);
	count = 0;
	while (*big != '\0')
	{
		if (*big != *little && count > 0)
		{
			little -= count;
			big -= count - 1;
			count = 0;
		}
		if (*big == *little)
		{
			count++;
			little++;
		}
		if (count == len)
			return ((char*)big - count + 1);
		big++;
	}
	return (0);
}
