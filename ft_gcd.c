/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gcd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szverhov <szverhov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 13:49:15 by szverhov          #+#    #+#             */
/*   Updated: 2017/11/03 14:00:31 by szverhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_gcd(int nm1, int nm2)
{
	int res;
	int i;
	int div;

	res = 0;
	div = 1;
	i = nm1 > nm2 ? nm2 : nm1;
	if (i > 0)
		while (i > 0)
		{
			if (nm1 % div == 0 && nm2 % div == 0)
				res = div;
			i--;
			div++;
		}
	if (i < 0)
		while (i < 0)
		{
			if (nm1 % div == 0 && nm2 % div == 0)
				res = div;
			i++;
			div++;
		}
	return (res);
}
