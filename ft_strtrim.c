/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:37:13 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/15 19:19:20 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	diff_index(char const *s1, char const *set, int dir)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dir == -1)
		j = ft_strlen(s1) - 1;
	while (set[i] != '\0')
	{	
		if (s1[j] == set[i])
		{
			i = 0;
			j = j + dir;
		}
		else
			i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	size_t	index;

	r = (char *) s1;
	if (!s1 || !set)
		return (0);
	index = diff_index(s1, set, 1);
	if (s1[index] == '\0')
		return (ft_strdup(""));
	r = (char *) s1 + index;
	index = diff_index(s1, set, -1);
	return (ft_substr(r, 0, 1 + index - (ft_strlen(s1) - ft_strlen(r))));
}
