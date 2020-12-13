/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:12:03 by apommier          #+#    #+#             */
/*   Updated: 2020/12/13 20:39:29 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p;
	const char	*p1;

	if (!dest || !src || !n)
		return (dest);
	p = (char*)dest;
	p1 = (const char*)src;

	i = 0;
	while (i < n)
	{
		p[i] = p1[i];
		i++;
	}
	return (dest);
}
