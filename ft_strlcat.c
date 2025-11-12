/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:07:32 by acombier          #+#    #+#             */
/*   Updated: 2025/11/12 12:22:19 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (size <= dlen)
	{
		return (size + slen);
	}
	while (src[i] && (dlen + i < size - 1))
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

/*int main(void)
{
	char	dest[] = "Hello";
	char	src[] = "brother";

	ft_strlcat(dest, src, 13);
	printf("%s", dest);
	return (0);
}*/
