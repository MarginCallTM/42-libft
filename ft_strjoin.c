/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:20:58 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/13 14:26:58 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	slen1;
	size_t	slen2;
	char	*joined;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	joined = malloc(slen1 + slen2 + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (i < slen1)
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < slen2)
	{
		joined[i] = s2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	return (joined);
}

/*int	main(void)
{
	char s1[] = "ouioui";
	char s2[] = " Baguette";

	char *result = ft_strjoin(s1, s2);

	printf("%s", result);
}*/