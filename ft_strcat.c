/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:48:22 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/02 00:04:19 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict dest, const char *restrict src)
{
	int	len;

	len = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[len] = src;
		src++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
