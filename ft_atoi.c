/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:25:44 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/10 14:17:22 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while ((nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n'
			|| nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
		&& nptr[i] != '\0')
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+' )
		i = i + 1;
	while (nptr[i] > 47 && nptr[i] < 58 && nptr[i] != '\0')
	{
		if((nb == -214748364 && nptr[i] > '8') || nb == -2147483648 || nb <= -214748365)
			return (0);
		if((nb == 214748364 && nptr[i] > '7') || nb == 2147483647 || nb >= 214748365)
			return (-1);
		nb = nb * 10;
		nb = nb + sign * (nptr[i] - 48);
		i++;
	}
	return (nb);
}
