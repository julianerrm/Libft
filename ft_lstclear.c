/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrodri <julrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:57:51 by julrodri          #+#    #+#             */
/*   Updated: 2021/09/20 10:55:18 by julrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*next;

	if (!*lst)
		return ;
	temp = *lst;
	while (temp->next)
	{
		del(temp->content);
		next = temp->next;
		free(temp);
		temp = next;
	}
	del(temp->content);
	free(temp);
	*lst = 0;
}
