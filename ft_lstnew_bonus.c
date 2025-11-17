/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:19:54 by acombier          #+#    #+#             */
/*   Updated: 2025/11/17 12:30:23 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*node;
	
	node = malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	
	node->content = content;
	node->next = NULL;

	return (node);
}