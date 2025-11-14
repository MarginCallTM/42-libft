/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:51:30 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/14 14:10:54 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main(void)
{
	ft_putchar_fd('H', 1);
	ft_putchar_fd('z', 2);
	ft_putchar_fd('P', 1);
	ft_putchar_fd('\n', 2);
}*/