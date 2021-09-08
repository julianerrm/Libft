/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:28:49 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/07 23:00:18 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	j = 0;
	r = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!r)
		return (0);
	while (s1[i] != '\0')
	{
		r[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i] != '\0')
	{
		r[j + i] = s2[i];
		i++;
	}
	r[j + i] = '\0';
	return (r);
}
