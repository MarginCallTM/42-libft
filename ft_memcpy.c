/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:52:31 by acombier          #+#    #+#             */
/*   Updated: 2025/11/09 12:03:17 by acombier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Hello world !";
	char	dest[100];

	printf("%s", ft_memcpy(dest, src, 5));

	return (0);
}*/
