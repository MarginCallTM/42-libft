/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:33:38 by acombier          #+#    #+#             */
/*   Updated: 2025/11/11 12:53:28 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	if(c == '\0')
	{
		return ((char *)(str + i));
	}
	while(str[i])
	{
		i++;
	}
	while(i >= 0)
	{
		if(str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		i--;
	}
	return(NULL);
}

/*int main(void)
{
	char	str[] = "Hello world";
	char	c = 'e';

	printf("%s", ft_strrchr(str, c));
}*/
