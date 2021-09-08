/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:38:44 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/07 23:09:42 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_striteri(char const *s, char (*f)(unsigned int, char*))
{
	char			*r;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	r = ft_strdup(s);
	while (r[i])
	{
		r[i] = f(i, &r[i]);
		i++;
	}
	return (r);
}
