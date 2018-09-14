/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 19:48:12 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/03 12:49:20 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*list;
	void			*tmp;

	list = (t_list*)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->content = malloc(sizeof(content_size));
	if (list->content == NULL)
		return (NULL);
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
		list->next = NULL;
		return (list);
	}
	list->content_size = content_size;
	tmp = list->content;
	while (content_size--)
		*((unsigned char*)list->content++) = *((unsigned char*)content++);
	list->content -= list->content - tmp;
	list->next = NULL;
	return (list);
}
