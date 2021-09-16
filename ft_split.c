/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:34:00 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/16 09:34:02 by julrodri         ###   ########.fr       */
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
	if (ft_strncmp(temp,"",1) == 0 || !temp)
	{
		// free(temp);
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
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	char	*int_s;
	int		count;

	if (!s)
		return (0);
	count = ft_splitcounter(s, c);
	r = (char **) malloc((count + 1) * sizeof(char *));
	if (!r)
		return (0);
	r[count] = (void *) 0;	
	if (count == 0)
		return (r);
	count = count - 1;
	int_s = (char *) s;
	while (count > 0)
	{
		int_s = ft_strtrim(int_s, &c);
		r[count] = ft_strtrim(ft_strrchr(int_s, c), &c);
		int_s = ft_substr(int_s, 0, ft_strlen(int_s) - ft_strlen(r[count]) - 1);
		count --;
	}	
	r[count] = ft_strtrim(int_s, &c);
	return (r);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%s", ft_split("fdghjk", ' ')[0]);
// 	printf("%s", ft_split("fdghjk", ' ')[1]);
// }