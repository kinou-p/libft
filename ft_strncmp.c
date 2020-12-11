/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:13:31 by apommier          #+#    #+#             */
/*   Updated: 2020/12/11 18:32:24 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i] - s2[i]));
		n--;
		i++;
	}
	return ((unsigned char)(s1[i] - s2[i]));
}
