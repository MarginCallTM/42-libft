/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:20:58 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/12 18:49:33 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


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


char    *ft_strjoin(char const *s1, char const *s2)
{
    if(!s1 || !s2)
        return (NULL);
    
    size_t  slen1;
    size_t  slen2;

    slen1 = ft_strlen(s1);
    slen2 = ft_strlen(s2);

    char    *joined = malloc(slen1 + slen2 + 1);
    if(!joined)
        return (NULL);


    size_t  i;
    i = 0;

    while(i < slen1)
    {
       joined[i] = s1[i];
        i++;
    }

    size_t  j;
    j = 0;
    while(j < slen2)
    {
        joined[i] = s2[j];
        i++;
        j++;
    }

    joined[i] = '\0';

    return (joined);
}

int main(void)
{
    char    s1[] = "ouioui";
    char    s2[] = " Baguette";

    char    *result = ft_strjoin(s1, s2);

    printf("%s", result);
}