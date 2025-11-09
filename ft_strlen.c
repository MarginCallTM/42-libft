/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:11:07 by acombier          #+#    #+#             */
/*   Updated: 2025/11/09 12:10:08 by acombier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}

/*int main(void)
{
	printf("%d", ft_strlen("Hello"));
	return (0);
}*/
