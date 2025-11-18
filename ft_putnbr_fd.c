/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 08:59:11 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/18 09:25:30 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putnbr_fd(int   n, int fd)
{
    if(n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if(n < 0)
    {
        write(fd, "-", 1);
        n *= -1;
    }
    if(n > 9)
    {

        ft_putnbr_fd(n / 10, fd);
    }
    ft_putchar((n % 10) + '0', fd);
}

int main(void)
{
   ft_putnbr_fd(2147483647, 1);
}