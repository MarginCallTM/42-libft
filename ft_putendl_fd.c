/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:38:48 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/14 11:43:27 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putendl_fd(char *s, int fd)
{
    if(!s)
        return;

    size_t  i;
    i = 0;
    while(s[i])
    {
        write(fd, &s[i] , 1);
        i++;
    }
    write(fd,"\n", 1);
}

int main(void)
{
    ft_putendl_fd("Hello world", 1);
    ft_putendl_fd("This is me", 1);

    return (0);
}