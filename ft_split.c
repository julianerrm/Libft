/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:34:00 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/07 23:18:24 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_splitcounter(char const *s, char c)
{
	int		count;
	size_t	i;

	i = 1;
	count = 0;
	while (i < ft_strlen(s) - 1)
	{
		if (s[i] == c)
			count ++;
		i++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	char	*int_s;
	int		count;

	count = ft_splitcounter(s, c);
	r = (char **) malloc((count + 1) * sizeof(void *));
	r[count] = 0;
	if (!r || !s || !c)
		return (0);
	int_s = (char *) s;
	if (int_s[ft_strlen(s) - 1] == c)
		int_s[ft_strlen(s) - 1] = '\0';
	while (count > 0)
	{
		r[count] = ft_strrchr(int_s, c) + 1;
		int_s[s - r[count] - 1] = '\0';
		count --;
	}	
	if (int_s[0] == c)
		r[count] = int_s + 1;
	else
		r[count] = int_s;
	return (r);
}

#include <stdio.h>
int main(void)
{
	printf("%s\n%s\n%s\n", ft_split("oiatudoabom", 'a')[0], ft_split("oiatudoabom", 'a')[1], ft_split("oiatudoabom", 'a')[2]);
}