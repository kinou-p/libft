/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <alexpomms@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:38:13 by apommier          #+#    #+#             */
/*   Updated: 2020/12/16 17:00:44 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	if (!(dest = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	while (s1[i] && s1)
	{
		dest[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] && s2)
	{
		dest[j] = s2[i];
		j++;
		i++;
	}
	dest[j] = 0;
	return (dest);
}
