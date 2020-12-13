/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:09:57 by apommier          #+#    #+#             */
/*   Updated: 2020/12/13 20:29:08 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new;
	int		i;
	
	i = 0;
	new = malloc(size * nmemb);
	if (new)
	{
		while (size * nmemb - i)
		{
			new[i] = 0;
			i++;
		}
	}
	return ((void*)new);
}
