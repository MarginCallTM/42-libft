/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:05:01 by acombier          #+#    #+#             */
/*   Updated: 2025/11/10 13:41:42 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Recherche la première occurence d'une valeur typée int, 
mais interprétée en tant que char, dans un bloc de mémoire.
Comme on traite un bloc de mémoire et non
pas une chaîne de caractères AZT (à zéro terminal),
nous devons aussi spécifier à la fonction la taille du bloc
de mémoire dans lequel réaliser la recherche.
*/

#include <stdio.h>

void *ft_memchr( const void *ptr, int c, size_t size )
{
	size_t	i;
	i = 0;
	
	unsigned char	*p;
	p = (unsigned char *)ptr;

	while(i < size)
	{
		if(p[i] == (unsigned char)c)
		{
			return(p + i);
		}
		i++;
	}
	return (NULL);
}

int main(void)
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
}