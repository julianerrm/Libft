/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:54:02 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/07 22:46:28 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*r;

	r = malloc((nmemb * size) * sizeof(char));
	if (!r)
		return (0);
	ft_memset(r, 0, (nmemb * size));
	return (r);
}
