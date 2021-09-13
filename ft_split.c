/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:34:00 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/13 17:08:14 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// # include <stddef.h>
// # include <unistd.h>
// # include <stdlib.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	count;

// 	count = 0;
// 	while (s[count] != '\0')
// 		count++;
// 	return (count);
// }

// char	*ft_strrchr(const char *s, int c)
// {
// 	int		len;

// 	len = ft_strlen(s);
// 	while (s[len] != c && len >= 0)
// 		len--;
// 	if (len < 0)
// 		return (0);
// 	return ((char *) &s[len]);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*r;
// 	size_t	i;

// 	r = (char *) malloc(len + 1);
// 	if (!r || !s)
// 		return (0);
// 	i = 0;
// 	while (i < len && (start + i) < ft_strlen(s))
// 	{
// 		r[i] = s[start + i];
// 		i++;
// 	}
// 	r[len] = '\0';
// 	return (r);
// }

static char	*ft_trimc(char const *s, char const c)
{
	char	*r;
	size_t	i;

	r = (char *) s;
	i = 0;
	if (!s)
		return (0);
	while (s[i] == c)
		i++;
	if (i == ft_strlen(s))
		return (0);
	r = (char *)(s + i);
	i = ft_strlen(r) - 1;
	while (r[i] == c && i > 0)
		i--;
	return (ft_substr(r, 0, i + 1));
}

static int	ft_splitcounter(char const *s, char c)
{
	char	*temp;
	int		count;
	size_t	i;

	i = 0;
	count = 0;
	temp = ft_trimc(s, c);
	if (!temp)
		return (0); 
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

	count = ft_splitcounter(s, c);
	r = (char **) malloc((count + 1) * sizeof(char *));
	if (!r || !s || !c || !count)
		return (0);
	r[count] = (void *) 0;
	count = count - 1;
	int_s = (char *) s;
	while (count > 0)
	{
		int_s = ft_trimc(int_s, c); 
		r[count] = ft_trimc(ft_strrchr(int_s, c), c);
		int_s = ft_substr(int_s, 0, ft_strlen(int_s) - ft_strlen(r[count]) - 1);
		count --;
	}	
	r[count] = ft_trimc(int_s, c);
	return (r);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", ft_split("      split       this for   me  !       ", ' ')[0], ft_split("      split       this for   me  !       ", ' ')[1], ft_split("      split       this for   me  !       ", ' ')[2],
// 	 ft_split("      split       this for   me  !       ", ' ')[3], ft_split("      split       this for   me  !       ", ' ')[4], 
// 	 ft_split("      split       this for   me  !       ", ' ')[5], ft_split("      split       this for   me  !       ", ' ')[6]);
// }