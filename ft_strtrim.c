/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:12:21 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/12 20:45:01 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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



int ft_is_in_set(char c, const char * set)
{
    size_t  i;

    i = 0;

    while(set[i])
    {
        if(c == set[i])
        {
            return (1);
        }
        i++;
    }
    return (0);
}


char    *ft_strtrim(char const *s1, char const *set)
{
    if(!s1 || !set)
        return (NULL);

    size_t  start;

    start = 0;
    
    while(s1[start] && ft_is_in_set(s1[start], set))
    {
        start++;
    }

    size_t  end;

    end = ft_strlen(s1);

    while(end > start && ft_is_in_set(s1[end - 1], set))
    {
        end--;
    }
    char    *strtrim = malloc(sizeof(*s1) * (end - start + 1));
    if(!strtrim)
        return (NULL);

    size_t  i;
    i = 0;
    while(start < end)
    {
        strtrim[i] = s1[start++];
        i++;
    }
    strtrim[i] = '\0';
    
    return (strtrim);
}

int main(void)
{
    char    s1[] = "    g   manger     f   ";

    char    *trim = ft_strtrim(s1, " ");

    printf("%s", trim);
}