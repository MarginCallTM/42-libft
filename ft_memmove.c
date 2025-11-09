/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:32:53 by acombier          #+#    #+#             */
/*   Updated: 2025/11/09 12:09:48 by acombier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	unsigned char	*d;
	*d = (unsigned char *) dest;
	const unsigned char	*s
	*s = (const unsigned char *) src;

	if (!dest || !src)
		return (dest);
	if (d > s && d < s + n)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
