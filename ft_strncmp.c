/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:50:51 by acombier          #+#    #+#             */
/*   Updated: 2025/11/12 14:14:21 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length && s1[i]
		&& (const unsigned char)s1[i] == (const unsigned char)s2[i])
	{
		i++;
	}
	if (i == length)
	{
		return (0);
	}
	return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
}

/*int main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "hello";

	printf("%d", ft_strncmp(s1 , s2, 1));
}*/
