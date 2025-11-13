/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:59:50 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/13 14:26:17 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*empty;
	size_t	max_len;
	size_t	total_len;
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		empty = malloc(1);
		if (!empty)
			return (NULL);
		else
			return (empty);
		empty[0] = '\0';
	}
	max_len = slen - start;
	if (max_len < len)
		total_len = max_len;
	else
		total_len = len;
	substr = malloc(total_len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < total_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}

/*int main(void)
{
	char    s[] = "My little world";

	printf("%s", ft_substr(s, 0 , 9));
}*/