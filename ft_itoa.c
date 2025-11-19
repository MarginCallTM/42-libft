/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:36:02 by acombier          #+#    #+#             */
/*   Updated: 2025/11/19 14:25:13 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long n)
{
	int	len;

	if (n == 0)
	{
		return (1);
	}
	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_itoa_reverse_print(long nb, char *str, long *len)
{
	while (nb > 0)
	{
		str[*len] = nb % 10 + '0';
		(*len)--;
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	long	len;
	char	*str;

	nb = n;
	len = ft_intlen(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	if (nb == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	ft_itoa_reverse_print(nb, str, &len);
	return (str);
}
/*int main(void)
{
	printf("%s", ft_itoa(-2147483648));

	return (0);
}*/