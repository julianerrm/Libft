/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 00:04:56 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/10 13:42:57 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		mem;
	char	*r;

	i = 0;
	r = (char *) big;
	if (little[0] == '\0')
		return (r);
	while (big[i] != '\0' && len - i > ft_strlen(little) - 1)
	{
		mem = i;
		while (big[i] == little [i - mem] && big[i] != '\0')
			i++;
		if (little[i - mem] == '\0')
			return ((char *) &big[mem]);
		i = mem + 1;
	}
	return (0);
}
