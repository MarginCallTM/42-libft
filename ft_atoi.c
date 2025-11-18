/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:20:09 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/17 18:26:30 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// Pass tab space + and -
int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				result;
	int				negativ;

	i = 0;
	result = 0;
	negativ = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			negativ *= -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * negativ);
}

/*int main(void)
{
	printf("Result : %d\n", ft_atoi("123"));
	printf("Result : %d\n", ft_atoi("   -42"));
	printf("Result : %d\n", ft_atoi("   +58"));
	printf("Result : %d\n", ft_atoi("  ---+--+1234ab"));
	printf("Result : %d\n", ft_atoi("0"));
	printf("Result : %d\n", ft_atoi("   \t\n  -00123"));
	printf("Result : %d\n", ft_atoi("   +--++--+--0009"));
		return (0);
}*/