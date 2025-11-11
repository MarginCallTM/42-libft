/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:32:53 by acombier          #+#    #+#             */
/*   Updated: 2025/11/11 12:59:02 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	unsigned char	*d;
	d = (unsigned char *) dest;
	const unsigned char	*s;
	s = (const unsigned char *) src;

	if (!dest || !src)
		return (dest);
	if (d > s && d < s + n)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*int main(void)
{
	char data[] = "123456789";

	// Test avec chevauchement vers la droite
	ft_memmove(data + 2, data, 5);
	printf("Résultat 1 : %s\n", data); // doit afficher "121234589"

	// Reset
	strcpy(data, "123456789");

	// Test avec chevauchement vers la gauche
	ft_memmove(data, data + 2, 5);
	printf("Résultat 2 : %s\n", data); // doit afficher "345676789"

	return 0;
}*/

