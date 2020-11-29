/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:09:48 by apommier          #+#    #+#             */
/*   Updated: 2020/11/29 17:02:33 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	int		i;

	p = (char*)s;
	i = 0;
	while (n != 0)
	{
		p[i] = 0;
		i++;
		n--;
	}
}
