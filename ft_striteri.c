/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:29:27 by adriencombi       #+#    #+#             */
/*   Updated: 2025/11/14 17:33:58 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void    to_upper(unsigned int i, char *c)
{
	size_t	i;

	if(*c >= 'A' && *c <= 'Z')
		c += 32;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			i;

	if (!s || !f)
	{
		return ;
	}
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int main(void)
{
	char    str[] = "HELLO WORLD";

	ft_striteri(str, to_upper);

	printf("%s\n", str);

}*/