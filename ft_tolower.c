/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:02:20 by acombier          #+#    #+#             */
/*   Updated: 2025/11/10 10:10:59 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
	{
		c += 32;
	}

	return (c);
}

int main(void)
{
	printf("%d", ft_tolower('D'));
}