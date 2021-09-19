/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:34:39 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/16 17:06:03 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	if (!s)
		return (0);
	if (start > ft_strlen(s) - 1)
		len = 0;
	else if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	r = (char *) malloc(len + 1);
	if (!r)
		return (0);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		r[i] = s[start + i];
		i++;
	}
	r[len] = '\0';
	return (r);
}
