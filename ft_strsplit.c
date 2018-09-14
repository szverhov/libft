/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 13:29:00 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/02 14:24:45 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_of_words(char const *s, char c)
{
	size_t i;
	size_t w_count;

	if (s == 0)
		return (0);
	w_count = 0;
	i = 0;
	if (s[0] != c)
		w_count++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c && s[i + 1] != 0))
			w_count++;
		i++;
	}
	return (w_count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		j;
	int		len;
	int		i;

	j = 0;
	len = 0;
	i = -1;
	if (s == 0 || (res = (char**)malloc(sizeof(char*)
		* (count_of_words(s, c) + 1))) == 0)
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c || (s[i + 1] == 0 && s[i] != c))
			len++;
		if ((s[i] == c && len > 0) || (s[i + 1] == 0 && len > 0))
		{
			res[j] = (s[i + 1] == 0 && s[i] != c) ?
			ft_strsub(s, i - len + 1, len) : ft_strsub(s, i - len, len);
			j++;
			len = 0;
		}
	}
	res[j] = 0;
	return (res);
}
