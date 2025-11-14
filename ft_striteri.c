/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:29:27 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/14 10:48:00 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void    to_upper(unsigned int i, char *c)
{
    if(*c >= 'A' && *c <= 'Z')
        c += 32;
}


void    ft_striteri(char *s, void(*f)(unsigned int, char*))
{
    if(!s || !f)
        return;
    
        size_t  i;

        i = 0;

        while(s[i])
        {
            f(i, &s[i]);
            i++;
        }

}

int main(void)
{
    char    str[] = "HELLO WORLD";

    ft_striteri(str, to_upper);

    printf("%s\n", str);
    
}