/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:07:08 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/19 14:32:44 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;

	if (!nmemb || !size)
		return (malloc(0));
	if (size && nmemb > SIZE_MAX / size)
		return (0);
	tmp = malloc(nmemb * size);
	if (!tmp)
	{
		return (NULL);
	}
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}

/*int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_calloc(5, sizeof(int));
	if (!tab)
	{
		printf("Allocation failed");
		return (1);
	}
	while (i < 5)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
