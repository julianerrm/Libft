/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:52:38 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/02 17:18:53 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	ft_algtchr(int n)
{
	if (n < 10)
		return (n + 48);
	if (n > 9)
		return (ft_algtchr(n % 10));
}

static int	ft_alg(int n)
{
	int	alg;

	alg = 1;
	while (n / 10 > 0)
	{
		n = n / 10;
		alg++;
	}
	return (alg);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		alg;
	int		neg;
	int		n_temp;

	if (n == -2147483648)
		return ("-2147483648");
	neg = 0;
	if (n < 0)
		neg = 1;
	n_temp = n * (1 - neg * 2);
	alg = ft_alg(n_temp);
	r = (char *) malloc((neg + alg + 1) * sizeof(char));
	if (neg)
		r[0] = '-';
	r[neg + alg] = '\0';
	n_temp = n * (1 - neg * 2);
	while (alg > 0)
	{
		r[alg + neg - 1] = ft_algtchr(n_temp);
		n_temp = n_temp / 10;
		alg--;
	}
	return (r);
}
