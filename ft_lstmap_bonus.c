/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:15:47 by acombier          #+#    #+#             */
/*   Updated: 2025/11/17 12:37:22 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list = NULL;
	t_list *new_node;

	if (!lst || !f)
		return (NULL);
	while (lst != NULL)
	{
		void *new_content = f(lst->content);

		new_node = ft_lstnew(new_content);

		if (!new_content)
		{
			ft_lstclear(&new_content, del);
			return (NULL);
		}

		ft_lstadd_back(&new_list, new_node);

		lst = lst->next;
	}

	return (new_list);
}