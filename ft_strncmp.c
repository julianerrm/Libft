/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:39:52 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/01 23:56:56 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	r;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n - 1 && s1[i] != '\0')
		i++;
	r = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (r);
}
