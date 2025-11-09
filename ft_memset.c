/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:13:07 by acombier          #+#    #+#             */
/*   Updated: 2025/11/07 08:39:44 by acombier         ###   ########.fr       */
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
    printf("%s", ft_memset(str, '#' , 4));
    return (0);
}
