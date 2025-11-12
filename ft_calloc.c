/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:07:08 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/11 13:47:12 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	tmp = malloc(count * size);
	if (!tmp)
	{
		return (NULL);
	}
	ft_bzero(tmp, count * size);
	return (tmp);
}

/*int main(void)
{
	int *tab;
	int i;

	i = 0;

	tab = ft_calloc(5, sizeof(int));

	if(!tab)
	{
		printf("Allocation failed");
		return (1);
	}

	while(i < 5)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}

	free(tab);
	return (0);
}*/
