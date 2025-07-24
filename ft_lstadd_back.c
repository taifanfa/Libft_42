/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:48:54 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/24 14:01:44 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*temp;

	head = NULL;
	node1 = ft_lstnew("First");
	node2 = ft_lstnew("Second");
	node3 = ft_lstnew("Third");
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstadd_back(&head, node1);
	temp = head;
	while (temp)
	{
		printf("Node content: %s\n", (char *)temp->content);
		temp = temp->next;
	}
	return (0);
}*/
