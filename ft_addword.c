/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:00:49 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/05 18:34:39 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_addword(t_arr **arr, const char *word)
{
	if (arr == NULL || (*arr == NULL) || word == NULL ||
	word[0] == 0 || (*arr)->type_size == 4)
		return ;
	while (*word)
	{
		ft_add(&(*arr), *word);
		word++;
	}
}
