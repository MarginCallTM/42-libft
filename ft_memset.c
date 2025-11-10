/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:13:07 by acombier          #+#    #+#             */
/*   Updated: 2025/11/10 19:06:41 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
    size_t  i;
    i = 0;

     while (i < n )
     {
        ((unsigned char*)str)[i] = (unsigned char)c;
        i++;
     }

    return (str);
}

int main(void)
{
    char    str[] = "Hello my friends";
    printf("%s", (char *)ft_memset(str, '#', 4));
    return (0);
}
