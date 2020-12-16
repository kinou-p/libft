/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <alexpomms@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:20:19 by apommier          #+#    #+#             */
/*   Updated: 2020/12/16 16:18:00 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill(long n, int j, int minus)
{
	char	*dest;

	j += minus;
	dest = (char*)malloc(sizeof(char) * (j + 1));
	if (dest == 0)
		return (0);
	dest[j] = 0;
	if (n == 0)
		dest[j - 1] = '0';
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

char		*ft_itoa(int n)
{
	long	i;
	long	k;
	int		j;
	int		minus;

	k = n;
	minus = 0;
	i = 1;
	j = 0;
	if (k < 0)
	{
		minus = 1;
		k = k * -1;
	}
	while (k >= i - 1)
	{
		i = i * 10;
		j++;
	}
	if (k == 9)
		j = 1;
	return (fill(k, j, minus));
}
