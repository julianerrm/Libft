/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:52:38 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/08 00:19:08 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

static char	ft_algtchr(int n)
{
	if (n < 10)
		return (n + 48);
	else
		return (ft_algtchr(n % 10));
}

static int	ft_negative(int n)
{
	return (n < 0);
}

static char	*ft_minneg(void)
{
	char	*r;

	r = (char *) malloc(10 * sizeof(char));
	r = "-2147483648";
	return (r);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		alg;
	int		n_temp;

	if (n == -2147483648)
		return (ft_minneg);
	n_temp = n * (1 - ft_negative(n) * 2);
	alg = ft_alg(n_temp);
	r = (char *) malloc((ft_negative(n) + alg + 1) * sizeof(char));
	if (!r)
		return (0);
	if (ft_negative(n))
		r[0] = '-';
	r[ft_negative(n) + alg] = '\0';
	n_temp = n * (1 - ft_negative(n) * 2);
	while (alg > 0)
	{
		r[alg + ft_negative(n) - 1] = ft_algtchr(n_temp);
		n_temp = n_temp / 10;
		alg--;
	}
	return (r);
}
