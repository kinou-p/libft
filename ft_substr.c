/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:54:40 by apommier          #+#    #+#             */
/*   Updated: 2020/11/29 23:28:20 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * len);
	if (dest == 0)
		return (0);
	while (len - 1)
	{
		dest[i] = s[i + start];
		len--;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
