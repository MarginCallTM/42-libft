/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:00:05 by acombier          #+#    #+#             */
/*   Updated: 2025/11/13 15:03:25 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Count word
int	ft_count_word(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] != c)
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
// Allocate tab
void	ft_allocate_tab(char **tab, const char *s, char c)
{
	size_t	lenword;
	int		i;
	int		j;

	i = 0;
	j = 0;
	lenword = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			while (s[i] != c)
			{
				lenword++;
				i++;
			}
			tab[j] = malloc(sizeof(char) * (lenword + 1));
			j++;
			lenword = 0;
		}
		else
		{
			i++;
		}
	}
}

// fill the tab
void	ft_fill_tab(char **tab, const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			while (s[i] != c)
			{
				tab[j][k] = s[i];
				k++;
				i++;
			}
			j++;
			k = 0;
		}
		else
		{
			i++;
		}
	}
}

// ft_split
char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_word;

	if (!s)
	{
		return (NULL);
	}
	nb_word = ft_count_word(s, c);
	tab = malloc(sizeof(char *) * (nb_word + 1));
	if (!tab)
		return (NULL);
	tab[nb_word] = NULL;
	ft_allocate_tab(tab, s, c);
	ft_fill_tab(tab, s, c);
	return (tab);
}

int	main(void)
{
	int i;

	i = 0;

	char s[] = "---bro---whats---up---mate--";

	char **result;

	result = ft_split(s, '-');

	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}

	return (0);
}