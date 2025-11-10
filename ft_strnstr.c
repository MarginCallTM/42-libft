/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:35:51 by acombier          #+#    #+#             */
/*   Updated: 2025/11/10 14:58:38 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *little , const char *big , size_t  len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)little;
	s2 = (unsigned char *)big;

	if(!s1)
	{
		return (big);
	}
	while()

}

int main(void)
{
	char	little[] = "my";
	char	big[] = "Welcome to my world";

	printf("%s", ft_strnstr(little, big, 14));
}