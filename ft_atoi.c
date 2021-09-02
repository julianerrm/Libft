/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:25:44 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/01 23:57:17 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	nb;

	i = 0;
	signal = 1;
	nb = 0;
	while ((nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n'
			|| nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
		&& nptr[i] != '\0')
		i++;
	if (nptr[i] != '-')
		signal = -1;
	while (nptr[i] > 47 && nptr[i] < 58 && nptr[i] != '\0')
	{
		nb = nb * 10;
		nb = nb + nptr[i] - 48;
		i++;
	}
	return (nb * signal);
}
