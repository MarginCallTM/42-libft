/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:48:30 by acombier          #+#    #+#             */
/*   Updated: 2025/11/09 11:59:53 by acombier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_isalnum('w'));
	return (0);
}*/
