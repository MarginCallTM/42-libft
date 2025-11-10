/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:43:43 by acombier          #+#    #+#             */
/*   Updated: 2025/11/10 18:46:59 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t		i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

int main(void)
{
	int     i;

	i = 0;
	
	char buffer[10] = "123456789";
	ft_bzero(buffer, 5);
	
	while(i < 10)
	{
	   printf("byte[%d] = 0x%02x\n", i, (unsigned char)buffer[i]);
		i++;
	}
	
}
