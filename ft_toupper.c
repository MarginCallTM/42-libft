/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:26:26 by acombier          #+#    #+#             */
/*   Updated: 2025/11/10 17:08:35 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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
	ft_toupper('g');
}