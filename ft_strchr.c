/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:02:57 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/14 20:55:07 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != (unsigned char)c && s[i] != '\0')
		i++;
	if (s[i] != (unsigned char)c)
		return (0);
	return ((char *) &s[i]);
}
