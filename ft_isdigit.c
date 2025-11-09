/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:44:15 by acombier          #+#    #+#             */
/*   Updated: 2025/11/09 12:01:37 by acombier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_digit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

/*int main(void)
{
	printf("%d", ft_is_digit('5'));
	return (0);
}*/
