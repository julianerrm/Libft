/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 10:05:51 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/02 00:03:56 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && src[n] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	while (src[n] != '\0')
		n++;
	return (n);
}
