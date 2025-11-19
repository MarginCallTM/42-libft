/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:12:21 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/19 17:13:59 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static void	ft_strncpy_trim(char *dest, const char *src, size_t start,
		size_t end)
{
	size_t	i;

	i = 0;
	while (start < end)
	{
		dest[i] = src[start];
		start++;
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*strtrim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_is_in_set(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_is_in_set(s1[end - 1], set))
	{
		end--;
	}
	strtrim = malloc(sizeof(*s1) * (end - start + 1));
	if (!strtrim)
		return (NULL);
	ft_strncpy_trim(strtrim, s1, start, end);
	return (strtrim);
}

/*int	main(void)
{
	char s1[] = "    g   manger     f   ";

	char *trim = ft_strtrim(s1, " ");

	printf("%s", trim);
}*/