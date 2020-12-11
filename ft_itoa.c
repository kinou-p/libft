/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <alexpomms@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:20:19 by apommier          #+#    #+#             */
/*   Updated: 2020/12/11 15:32:12 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill(long n, int j, int minus)
{
	char *dest;

	j += minus;
	dest = (char*)ft_calloc(j + 1, 1);
	if (dest == 0)
		return (0);
	dest[j] = 0;
	while (n)
	{
		dest[j - 1] = n % 10 + '0';
		j--;
		n /= 10;
	}
	if (minus)
		dest[j - 1] = '-';
	return (dest);
}

char	*ft_itoa(int n)
{
	long	i;
	int		j;
	int		minus;

	minus = 0;
	i = 1;
	j = 0;
	if (n < 0)
	{
		minus = 1;
		n = n * -1;
	}
	while (n >= i - 1)
	{
		i = i * 10;
		j++;
	}
	return (fill(n, j, minus));
}
