/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 00:08:48 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/16 18:15:40 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	i;

	if (!s || !f)
		return (0);
	i = 0;
	r = ft_strdup(s);
	if (!r)
		return (0);
	while (r[i] != '\0')
	{
		r[i] = f(i, s[i]);
		i++;
	}
	return (r);
}
