/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <alexpomms@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:58:04 by apommier          #+#    #+#             */
/*   Updated: 2020/12/11 18:39:14 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *chr;

	chr = *lst;
	while (*lst)
	{
		chr = *lst->next;
		del(*lst->content);
		free(*lst);
		*lst = chr;
	}
	lst = 0;
}
