/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:52:03 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/13 10:20:45 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int ft_count_word(char const *s, char c)
{
    size_t  i;
    size_t  count;

    i = 0;
    count = 0;

    while(s[i])
    {
        if(s[i] != c)
        {
            count++;
            while(s[i] && s[i] != c)
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    return (count);
}

char *word_dup(const char *s, size_t start, size_t end)
{
    
}


char **ft_split(char const *s, char c)
{
    if(!s || !c)
        return (NULL);
    
    char **tab;
    size_t word;

    word = ft_count_word(s, c);

    tab = malloc(sizeof(char *) * (word + 1));
    if(!tab)
        return (NULL);
    
    tab[word] = NULL;

    return (tab);

}


int main(void)
{
    printf("%d\n", ft_count_word("--hello--world--42--", '-'));

    return (0);
}