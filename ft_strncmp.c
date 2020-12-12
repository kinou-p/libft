/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:13:31 by apommier          #+#    #+#             */
/*   Updated: 2020/12/12 17:58:26 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (!s1 || !s2 || !n)
		return (0);
	while (n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((char)(s1[i] - s2[i]));
		n--;
		i++;
	}
	if (!s1[i] || !s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
