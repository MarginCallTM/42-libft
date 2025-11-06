/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:35:07 by acombier          #+#    #+#             */
/*   Updated: 2025/11/05 11:43:26 by acombier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* checks  for an alphabetic character; in the standard "C" locale,
   it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
   cales, there may be additional characters for which isalpha() is
   true—letters which are neither uppercase nor lowercase.*/


int ft_is_alpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
		return (0);
}


/*int main(void)
{
	printf("%d", ft_is_alpha(8));
	return (0);
}*/
