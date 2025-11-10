/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:57:45 by acombier          #+#    #+#             */
/*   Updated: 2025/11/10 17:08:37 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

int main(void)
{
	ft_isascii('B');
	return (0);
}
