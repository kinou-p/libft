/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <alexpomms@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 13:57:59 by apommier          #+#    #+#             */
/*   Updated: 2020/12/12 13:58:05 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char *str;

	str = (unsigned char*)s;
	while ((*str != c) && (*str != 0))
		str++;
	if (*str == c)
		return ((char*)str);
	else
		return (0);
}
