/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 23:22:47 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/15 19:23:04 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*r;
	size_t	i;

	if (!s)
		return (0);
	r = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!r)
		return (0);
	i = 0;
	while (i <= ft_strlen(s))
	{
		r[i] = s[i];
		i++;
	}
	return (r);
}
