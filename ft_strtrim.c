/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 23:52:05 by apommier          #+#    #+#             */
/*   Updated: 2020/12/16 17:07:15 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const *set, char c)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		i;
	char	*dest;

	if (!s1)
		return (0);
	i = 0;
	j = 0;
	j = ft_strlen(s1);
	while (is_set(set, s1[i]))
		i++;
	while (is_set(set, s1[j - 1]))
		j--;
	j -= i;
	if (j < 0)
		j = 0;
	if (!(dest = ft_calloc(len + 1, 1)) || !s1)
		return (0);
	j = 0;
	while (s1[i] && len - j && len > 0)
		dest[j++] = s1[i++];
	return (dest);
}
