/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 00:10:17 by apommier          #+#    #+#             */
/*   Updated: 2020/11/29 17:04:28 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalpha(int c)
{
	char c;

	ch = (char)c;
	if ((c > 64 && c < 90) || (c > 96 && c < 122))
		return (c);
	else
		return (0);
}
