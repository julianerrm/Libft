/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 23:22:47 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/01 23:57:46 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*r;
	size_t	i;

	r = malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	while (i <= ft_strlen(s))
	{
		r[i] = s[i];
		i++;
	}
	return (r);
}
