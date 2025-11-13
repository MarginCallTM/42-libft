/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:12:21 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/13 14:28:31 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_in_set(char c, const char *set)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*strtrim;
	size_t	i;

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
	i = 0;
	while (start < end)
	{
		strtrim[i] = s1[start++];
		i++;
	}
	strtrim[i] = '\0';
	return (strtrim);
}

/*int	main(void)
{
	char s1[] = "    g   manger     f   ";

	char *trim = ft_strtrim(s1, " ");

	printf("%s", trim);
}*/