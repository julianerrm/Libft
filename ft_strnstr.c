/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 00:04:56 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/02 00:06:20 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	check_whole_str(
const char *str, const char *to_find, int *i, int *mem)
{
	int	j;

	j = 0;
	if (str[*i] == to_find[j])
	{
		*mem = *i;
		while (str[*i] == to_find[j] && to_find[j] != '\0' )
		{
			*i = *i + 1;
			j++;
		}
		if (to_find[j] == '\0')
			*i = -2;
		else
			*i = *mem;
	}
}	

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	int		mem;
	char	*r;

	i = 0;
	r = (char *) &haystack[i];
	if (needle[0] == '\0')
		return (r);
	while (haystack[i] != '\0' && i >= 0 && i < n)
	{
		check_whole_str(haystack, needle, &i, &mem);
		i++;
	}
	if (i < 0)
	{
		r = (char *) &haystack[mem];
		return (r);
	}
	else
		return (0);
}
