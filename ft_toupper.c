/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:26:26 by acombier          #+#    #+#             */
/*   Updated: 2025/11/10 10:05:46 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
	{
		c -= 32;
	}

	return (c);
}

int main(void)
{
	;
	printf("%d", ft_toupper('g'));
}