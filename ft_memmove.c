/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:12:14 by apommier          #+#    #+#             */
/*   Updated: 2020/11/29 17:07:14 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dest > src)
	{
		while (n)
		{
			((char*)dest)[n] = ((char*)src)[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((char*)dest)[i] = ((char*)src)[i];
			i++;
		}
	}
	return (dest);
}
