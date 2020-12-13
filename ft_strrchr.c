/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:13:52 by apommier          #+#    #+#             */
/*   Updated: 2020/12/12 19:19:34 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*last;

	str = (char*)s;
	if(c == 0)
	{
		while (*str)
			str++;
		return (str);
	}
	last = 0;
	while (*str)
	{
		if (*str == c)
			last = str;
		str++;
	}
	return (last);
}
