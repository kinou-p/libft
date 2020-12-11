/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:12:32 by apommier          #+#    #+#             */
/*   Updated: 2020/12/11 18:50:20 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char *str;

	str = (unsigned char*)s;
	while ((*str != c) || (*str != 0))
		str++;
	if (*str == c)
		return ((char)str);
	else
		return (0);
}
