/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:22:06 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/07 23:56:25 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	if ( !src || n == 0)
		return (0);
	d = (char *) dest;
	s = (char *) src;
	while (i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}
