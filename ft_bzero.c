/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:22:06 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/01 23:57:12 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = (char *) dest;
	while (n > 0)
	{
		s[n - 1] = '\0';
		n--;
	}
	return (s);
}
