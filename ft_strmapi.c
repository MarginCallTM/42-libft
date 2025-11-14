/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriencombier <adriencombier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:10:34 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/14 10:48:03 by adriencombi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	to_uppercase(unsigned int i, char c)
{
	if(c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}
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

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if(!s || !f)
	{
		return(NULL);
	}
	
	size_t	len;
	size_t	i;

	len = ft_strlen(s);

	char	*str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	
	i = 0;
	while(s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';

	return (str);
}

int main(void)
{
	const char *original = "hello world";

	char *result;

	result = ft_strmapi(original, to_uppercase);

	if(result)
		printf("%s\n", result);
	else
		printf("Allocation failed");

	return (0);
}