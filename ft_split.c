/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <alexpomms@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 00:54:12 by apommier          #+#    #+#             */
/*   Updated: 2020/12/07 00:54:20 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

int		call(char *s, char c, char **dest, int j)
{
	int		i;

	i = 0;
	while (j > i)
	{
		if (fill_tab(*s, c, dest[i]))
			j--;
		else
		{
			while (i - 1)
			{
				free(dest[i - 1]);
			}
			free(dest);
		}		
		i++;
	}
}

int		fill_tab(char *s, char c, char *dest)
{
	int		i;

	i = 0;
	while (s[i] != c || s[i])
		i++;
	dest = (char*)ft_calloc(i + 1, sizeof(char))
	if (dest == 0)
		return (0);
	i = 0;
	while (s[i] != c || s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**dest;

	j = 0;
	i = 0;
	if (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	dest = (char**)malloc(sizeof(char*) * j)
	if (dest == 0)
		return (0)
	call(*s, c, **dest, j);
}
