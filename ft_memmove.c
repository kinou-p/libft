/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:12:14 by apommier          #+#    #+#             */
/*   Updated: 2020/12/13 21:10:58 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (!dest || !src || !n)
		return (dest);
	if (dest > src)
	{
		while (n)
		{
			((unsigned char*)dest)[n - 1] = ((unsigned char*)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			i++;
		}
	}
	return (dest);
}
