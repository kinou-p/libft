/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:13:42 by apommier          #+#    #+#             */
/*   Updated: 2020/11/29 17:20:11 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[i] == 0)
		return (big);
	while (big[i] && len - i)
	{
		j = 0;
		if (little[j] != big[i])
			i++;
		else
		{
			while (little[j] == big[i + j] && little[j] && len - i - j)
				j++;
			if (little[j] == 0)
				return (&big[i]);
		}
	}
	return (0);
}
