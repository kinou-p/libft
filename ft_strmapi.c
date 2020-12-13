/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <alexpomms@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:03:09 by apommier          #+#    #+#             */
/*   Updated: 2020/12/13 20:59:47 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char*)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!dest)
		return (0);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}
