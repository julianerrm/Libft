/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:38:44 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/06 13:17:58 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	while (r[i])
	{
		r[i] = f(i, str[i]);
		i++;
	}
	return (r);
}
