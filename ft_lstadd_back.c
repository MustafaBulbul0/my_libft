/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:04:10 by mubulbul          #+#    #+#             */
/*   Updated: 2024/10/18 20:49:17 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!new)
		return;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	while (temp -> next != NULL)
		temp = temp -> next;
	temp -> next = new;
}
