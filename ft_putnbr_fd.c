/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 15:01:47 by szverhov          #+#    #+#             */
/*   Updated: 2017/10/28 15:49:27 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursion(unsigned int nmbr, int fd)
{
	if (nmbr == 0)
		return ;
	recursion(nmbr / 10, fd);
	ft_putchar_fd(nmbr % 10 + 48, fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int nmbr;

	if (n == -2147483648)
	{
		nmbr = 2147483648;
		ft_putchar_fd('-', fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nmbr = n * -1;
	}
	else if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	else
		nmbr = n;
	recursion(nmbr, fd);
}
