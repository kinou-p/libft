/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:11:04 by apommier          #+#    #+#             */
/*   Updated: 2020/11/29 16:57:52 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*p;
	char	*p1;

	p = (char*)dest;
	p1 = (char*)src;
	while (n > 0 && *p1 != c)
	{
		*p = *p1;
		p++;
		p1++;
		n--;
	}
	if (*p1 == (char)c)
	{
		*p = *p1;
		p++;
	}
	return ((void*)p);
}
