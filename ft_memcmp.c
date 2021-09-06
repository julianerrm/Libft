/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:39:52 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/06 11:12:30 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*temp_s1;
	char	*temp_s2;
	size_t	i;
	int		r;

	if (n == 0)
		return (0);
	i = 0;
	temp_s1 = (char *) s1;
	temp_s2 = (char *) s2;
	while (temp_s1[i] == temp_s2[i] && i < n - 1 && temp_s1[i] != '\0')
		i++;
	r = (unsigned char)temp_s1[i] - (unsigned char)temp_s2[i];
	return (r);
}
