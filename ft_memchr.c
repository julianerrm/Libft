/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:02:57 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/15 17:03:08 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)s)[i] != (unsigned char)c && i < n)
		i++;
	if (((unsigned char *)s)[i] != (unsigned char) c || n == 0)
		return (0);
	return ((void *)s + i);
}
