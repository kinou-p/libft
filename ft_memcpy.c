/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:12:03 by apommier          #+#    #+#             */
/*   Updated: 2020/12/11 18:15:39 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*p2;
	int				i;

	i = 0;
	p = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	while (n > 0 && p2[i])
	{
		n--;
		p[i] = p2[i];
		i++;
	}
	return (dest);
}
