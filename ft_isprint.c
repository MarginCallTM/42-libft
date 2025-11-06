/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:07:39 by acombier          #+#    #+#             */
/*   Updated: 2025/11/05 12:10:42 by acombier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}


int main(void)
{
	printf("%d", ft_isprint('\n'));
	return (0);
}
