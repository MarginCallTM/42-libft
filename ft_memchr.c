/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:05:01 by acombier          #+#    #+#             */
/*   Updated: 2025/11/19 14:15:32 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t size)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < size)
	{
		if (p[i] == (unsigned char)c)
		{
			return (p + i);
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char	data[] = {'a', 'b', 'c', 'd','e', 'f'};

	char	*result = ft_memchr(data, 'c', 2);

	if(result)
	{
		printf("%c", *result);
	}
	else
	{
		printf("Non trouver");
	}
}*/