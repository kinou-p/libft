/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <alexpomms@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:58:04 by apommier          #+#    #+#             */
/*   Updated: 2020/12/11 17:47:15 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *chr;
	t_list *chr2;

	chr = *lst;
	while (chr)
	{
		chr2 = chr->next;
		del(chr->content);
		free(chr);
		chr = chr2;
	}
	lst = 0;
}
