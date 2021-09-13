/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:34:39 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/13 11:06:10 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	r = (char *) malloc(len + 1);
	if (!r || !s)
		return (0);
	i = 0;
	while (i < len && (start + i) < ft_strlen(s))
	{
		r[i] = s[start + i];
		i++;
	}
	r[len] = '\0';
	return (r);
}
