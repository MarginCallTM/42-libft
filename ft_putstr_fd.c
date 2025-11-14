/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:56:04 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/14 11:00:59 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    if(!s)
        return;
    int i;

    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}

int main(void)
{
    ft_putstr_fd("Hello\n", 1);
    ft_putstr_fd("Hello", 2);

    return (0);
}