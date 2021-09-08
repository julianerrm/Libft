/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:37:13 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/07 23:06:39 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	size_t	i;

	r = (char *) s1;
	i = 0;
	if (!s1 || !set)
		return (0);
	while (set[i] == '\0' && s1[i] == set[i])
		i++;
	if (i == ft_strlen(set))
		r = (char *)(s1 + i);
	i = ft_strlen(r) - ft_strlen(set);
	while (set[i] == '\0' && r[i] == set[i])
		i++;
	if (i == ft_strlen(set))
		return (ft_substr(r, 0, ft_strlen(r) - ft_strlen(set)));
	return (r);
}
