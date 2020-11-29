/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:13:07 by apommier          #+#    #+#             */
/*   Updated: 2020/11/29 17:11:24 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (scr[i])
		i++;
	while (size - 1 && src[j] != 0)
	{
		dst[j] = src[j];
		j++;
		size--;
	}
	dst[j] = 0;
	return (i);
}
