/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:44:57 by acombier          #+#    #+#             */
/*   Updated: 2025/11/10 14:28:49 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp( const void *ptr1, const void *ptr2, size_t size )
{
	size_t	i;

	i = 0;

	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;

	while(i < size)
	{
		if(p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}


int main(void)
{
    int ptr1 [] = { 52, 85, 20, 63, 21 };
    int ptr2 [] = { 54, 85, 20, 63, 21 };

	printf("%i", ft_memcmp(ptr1, ptr2, 5 * sizeof(int)));
}