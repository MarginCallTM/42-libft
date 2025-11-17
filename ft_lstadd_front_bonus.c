/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaad_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acombier <acombier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:01:23 by acombier          #+#    #+#             */
/*   Updated: 2025/11/17 12:14:22 by acombier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void	print_list(t_list *lst)
{
	while(lst)
	{
		printf("%s -> ", (char * )lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}
int	main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew(strdup("world"));
	t_list	*node2 = ft_lstnew(strdup("Hello"));

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);

	print_list(head);

	return (0);
}*/