/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 18:00:48 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/10 01:23:29 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;
	int		signal;

	if(!dest && !src)
		return (0);
	d = (char *) dest;
	s = (char *) src;
	i = 1;
	signal = 1;
	if (d - s < (int) n)
	{
		i = (int) n;
		n = 1;
		signal = - 1;
	}
	while ( (i - 1) * signal < (int) n)
	{
		*(d + i - 1) = *(s + i - 1);
		i = i + signal;
	}
	return (dest);
}
