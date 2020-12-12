/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <alexpomms@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 00:54:12 by apommier          #+#    #+#             */
/*   Updated: 2020/12/12 11:44:32 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		fill_tab(char *s, char c, char *dest)
{
	int		i;

	while (s[i] != c && s[i])
		i++;
	dest = (char*)malloc(sizeof(char) * i + 1);
	if (dest == 0)
		return (0);
	i = 0;
	while (s[i] != c && s[i])
	{
		dest[i] = s[i];
		i++;
	}
	return (1);
}

void	call(char *s, char c, char **dest, int j)
{
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (s[k] == c)
		k++;
	while (j > i)
	{
		if (!fill_tab(&s[k], c, dest[i]))
		{
			while (i - 1)
			{
				free(dest[i - 1]);
				i--;
			}
			free(dest);
			return ;
		}
		while (s[k] != c)
			k++;
		k++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**dest;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (j)
				j++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	if (!(dest = (char**)malloc(sizeof(char*) * (j + 1))))
		return (0);
	dest[j] = 0;
	call((char*)s, c, dest, j);
	return (dest);
}
