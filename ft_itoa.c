/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:52:38 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/15 16:50:48 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_alg(int n)
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

static char	ft_algtochr(int n)
{
	if (n < 10)
		return (n + 48);
	else
		return (ft_algtochr(n % 10));
}

static int	ft_negative(int n)
{
	return (n < 0);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		alg;
	int		n_temp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_temp = n * (1 - ft_negative(n) * 2);
	alg = ft_count_alg(n_temp);
	r = (char *) malloc((ft_negative(n) + alg + 1) * sizeof(char));
	if (!r)
		return (0);
	if (ft_negative(n))
		r[0] = '-';
	r[ft_negative(n) + alg] = '\0';
	n_temp = n * (1 - ft_negative(n) * 2);
	while (alg > 0)
	{
		r[alg + ft_negative(n) - 1] = ft_algtochr(n_temp);
		n_temp = n_temp / 10;
		alg--;
	}
	return (r);
}
