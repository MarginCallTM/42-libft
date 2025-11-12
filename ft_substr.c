/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:59:50 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/12 18:18:52 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    if(!s)
        return(NULL);

    size_t  slen;

    slen = ft_strlen(s);

    if(start >= slen)
    {
        char    *empty = malloc(1);
        if(!empty)
            return (NULL);
        else
            return (empty);
        empty[0] = '\0';
    }

    size_t  max_len;
    max_len = slen - start;

    size_t  total_len;
    if(max_len < len)
        total_len = max_len;
    else
        total_len = len;

    char    *substr = malloc(total_len + 1);
    if(!substr)
        return (NULL);

    size_t  i;
    i = 0;
    while(i < total_len)
    {
        substr[i] = s[start + i];
        i++;
    }

    return (substr);
}

int main(void)
{
    char    s[] = "My little world";

    printf("%s", ft_substr(s, 0 , 9));
}