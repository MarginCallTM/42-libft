/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:36:02 by acombier          #+#    #+#             */
/*   Updated: 2025/11/13 20:05:18 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
void	rec_itoa(long nb, char *str, long *i)
{
	if(nb >= 10)
		rec_itoa(nb / 10, str, i);
	str[*i] = nb % 10 + '0';
	(*i)++;
}

char	*ft_itoa(int n)
{
	int long nb;
	int long len;
	long	i;
	
	i = 0;
	nb = n;
	len = ft_intlen(nb);
	char	*str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
		str[len] = '\0';	
	if(nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	if(nb == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return(str);
	}
	rec_itoa(nb, str, &i);
	return (str);
}

int main(void)
{
	printf("%s", ft_itoa(730));

	return (0);
}