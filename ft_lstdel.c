/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 19:11:19 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/02 19:36:49 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (alst == 0 || del == 0)
		return ;
	tmp = *alst;
	while (tmp)
	{
		if ((*alst)->next == 0)
		{
			ft_lstdelone(&(*alst), del);
			break ;
		}
		while ((*alst)->next->next != 0)
			(*alst) = (*alst)->next;
		ft_lstdelone(&(*alst)->next, del);
		*alst = tmp;
	}
}
