/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:13:52 by apommier          #+#    #+#             */
/*   Updated: 2020/12/11 16:15:25 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	char *last;

	last = 0;
	str = (char*)s;
	while (*str != 0)
	{
		if (*str == c)
			last = str;
		str++;
	}
	return (last);
}
