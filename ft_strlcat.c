/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:07:32 by acombier          #+#    #+#             */
/*   Updated: 2025/11/09 13:12:03 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char	*dest, char *src, unsigned int size)
{
	int	i;
	unsigned	int j;
	unsigned	int len;

	i = 0;
	j = 0;
	len = 0;

	while(dest[i])
	{
		len++;
		i++;
	}
	if(size < len || size == 0)
	{
		return (0);
	}
	while(j < (size - len - 1))
	{
		dest[i] = src[i];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (len + j);
}

