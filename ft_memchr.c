/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:02:57 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/01 23:40:22 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		*temp;
	size_t	i;

	temp = (int *) s;
	i = 0;
	while (temp[i] != c && temp[i] != '\0' && i < n)
		i++;
	if (temp[i] != '\0' || i >= n)
		return (0);
	return (&temp[i]);
}
