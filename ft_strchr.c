/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:12:22 by acombier          #+#    #+#             */
/*   Updated: 2025/11/11 13:51:53 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)(str + i));
	}
	return (NULL);
}

/*int main(void)
{
	char	str[] = "Hello world";
	char	c = 'l';

	printf("%s", ft_strchr(str, c));
}*/
