/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:54:02 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/01 23:41:57 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*temp;
	int		i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (0);
	while (i < nmemb)
	{
		&temp[i] = malloc(size);
		i++;
	}
	return (temp);
}
