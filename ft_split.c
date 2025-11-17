/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:15:06 by acombier          #+#    #+#             */
/*   Updated: 2025/11/17 14:10:28 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_count_word(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
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

static int	ft_alloc_word(char **tab, int j, size_t lword)
{
	tab[j] = malloc(sizeof(char) * (lword + 1));
	if (!tab[j])
		return (-1);
	return (0);
}

int	ft_allocate_sub_tab(char **tab, const char *s, char c)
{
	size_t	lword;
	int		i;
	int		j;

	i = 0;
	j = 0;
	lword = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
			{
				lword++;
				i++;
			}
			if (ft_alloc_word(tab, j, lword) == -1)
				return (-1);
			j++;
			lword = 0;
		}
		else
			i++;
	}
	return (0);
}

void	ft_fill_sub_tab(char **tab, const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
			{
				tab[j][k] = s[i];
				k++;
				i++;
			}
			tab[j][k] = '\0';
			j++;
			k = 0;
		}
		else
			i++;
	}
}

void	free_tab(char **tab)
{
	int	i;

	if (!tab)
	{
		return ;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_word;

	if (!s)
		return (NULL);
	nb_word = ft_count_word(s, c);
	tab = malloc(sizeof(char *) * (nb_word + 1));
	if (!tab)
		return (NULL);
	tab[nb_word] = NULL;
	if (ft_allocate_sub_tab(tab, s, c) == -1)
	{
		free_tab(tab);
		return (NULL);
	}
	ft_fill_sub_tab(tab, s, c);
	return (tab);
}

/*int	main(void)
{
	int	i;

	i = 0;
	char s[] = "------He---ffd---hello--";

	char **result;

	result = ft_split(s, '-');

	while(result[i])
	{
		printf("%s\n",  result[i]);
		i++;
	}

	return (0);
}*/