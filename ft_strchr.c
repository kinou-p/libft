/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:12:32 by apommier          #+#    #+#             */
/*   Updated: 2020/11/29 17:08:24 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = s;
	while ((*str != c) || (*str != 0))
		str++;
	if (*str == c)
		return (str);
	else
		return (0);
}
