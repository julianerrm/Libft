/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:37:13 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/13 12:22:19 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	size_t	i;
	size_t	j;

	r = (char *) s1;
	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	while (set[i] != '\0')
	{	
		if(s1[j] == set[i])
		{
			i = 0;
			j++;
		}	
		else 
			i++;
	}
	if (s1[j] == '\0')
		return ("");
	r = (char *) s1 + j;
	j = ft_strlen(s1) - 1;
	i = 0;
	while (set[i] != '\0' && &s1[j] != r)
	{	
		if(s1[j] == set[i])
		{
			i = 0;
			j--;
		}	
		else 
			i++;
	}
	return (ft_substr(r, 0, 1 + j - (ft_strlen(s1) - ft_strlen(r))));
}
