/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:35:51 by acombier          #+#    #+#             */
/*   Updated: 2025/11/10 17:57:05 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *big , const char *little , size_t  len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if(little[0] == '\0')
		return((char *)big);
	while(i < len && big[i])
	{
		j = 0;
		while(i < len && big[i + j] == little[j])
		{
			j++;
		}
		if(little[j] == '\0')
		{
			return((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char	little[] = "my";
	char	big[] = "Welcome to my world";

	printf("%s", ft_strnstr(big, little, 18));
}