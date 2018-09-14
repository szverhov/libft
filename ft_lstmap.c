/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 19:28:46 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/03 12:25:08 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	res = f(ft_lstnew(lst->content, lst->content_size));
	if (res == NULL)
		return (NULL);
	tmp = res;
	lst = lst->next;
	while (lst)
	{
		tmp->next = f(ft_lstnew(lst->content, lst->content_size));
		if (tmp == NULL)
			return (NULL);
		lst = lst->next;
		tmp = tmp->next;
	}
	return (res);
}
