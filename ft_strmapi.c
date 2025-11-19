/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:10:34 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/14 14:12:07 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	to_uppercase(unsigned int i, char c)
{
	int	i;

	if(c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	if (!s || !f)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}

/*int main(void)
{
	const char *original = "hello world";

	char *result;

	result = ft_strmapi(original, to_uppercase);

	if(result)
		printf("%s\n", result);
	else
		printf("Allocation failed");

	return (0);
}*/