/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:34:46 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/16 10:03:08 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	power_10(int n)
{
	int	r;

	r = 1;
	if (n > 9)
		return (-1);
	while (n > 0)
	{
		r = r * 10;
		n--;
	}
	return (r);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	itoa;
	int		count;

	count = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		while (n / power_10(count) > 0)
			count++;
		while (count - 1 > 0)
		{
			itoa = n / power_10(count - 1) + 48;
			write(fd, &itoa, 1);
			n = n % power_10(count - 1);
			count--;
		}
		itoa = n + 48;
		write(fd, &itoa, 1);
	}
}
