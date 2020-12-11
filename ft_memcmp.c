/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:11:51 by apommier          #+#    #+#             */
/*   Updated: 2020/12/11 16:11:54 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n)
	{
		if (((char*)s1)[i] != ((char*)s2)[i])
			return (((char*)s1)[i] - ((char*)s2)[i]);
		n--;
		i++;
	}
	return (0);
}
