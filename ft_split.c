/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:34:00 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/18 17:00:36 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_splitcounter(char const *s, char c)
{
	char	*temp;
	int		count;
	size_t	i;

	i = 0;
	count = 0;
	temp = ft_strtrim(s, &c);
	if (ft_strncmp(temp, "", 1) == 0 || !temp)
	{
		free(temp);
		return (0);
	}
	while (i < ft_strlen(temp))
	{
		if (temp[i] == c)
		{
			count ++;
			while (temp[i + 1] == c)
				i ++;
		}
		i++;
	}
	free(temp);
	return (count + 1);
}

static int	ft_len_split(char *s1, char *s2, char c, int len)
{		
	len = len + ft_strlen(s1);
	while (*(s2 + len) == c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	char	*int_s;
	int		i;
	int		len;

	if (!s)
		return (0);
	r = (char **) malloc((ft_splitcounter(s, c) + 1) * sizeof(char *));
	if (!r)
		return (0);
	r[ft_splitcounter(s, c)] = (void *) 0;
	if (ft_splitcounter(s, c) == 0)
		return (r);
	int_s = ft_strtrim(s, &c);
	i = 0;
	len = 0;
	while (i < ft_splitcounter(s, c) - 1)
	{
		r[i] = ft_substr(int_s, len, ft_strchr(int_s + len, c) - (int_s + len));
		len = ft_len_split(r[i], int_s, c, len);
		i++;
	}
	r[i] = ft_substr(int_s, len, ft_strlen(int_s + len));
	free(int_s);
	return (r);
}
