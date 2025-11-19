/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:59:50 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/19 16:54:16 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static void	ft_strncpy_substr(char *dest, const char *src, size_t start,
		size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[start + i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if ((slen - start) < len)
		len = slen - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strncpy_substr(substr, s, start, len);
	return (substr);
}

/*int	main(void)
{
	char s[] = "My little world";

	printf("%s", ft_substr(s, 0, 9));
}*/