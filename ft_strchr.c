/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:02:57 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/08 00:01:00 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*r;
	int		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		return (0);
	r = (char *) &s[i];
	return (r);
}
