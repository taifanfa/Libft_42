/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:38:30 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/24 13:46:56 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		return ;
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*temp;

	head = NULL;
	node1 = ft_lstnew("Second");
	node2 = ft_lstnew("First");
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	temp = head;
	while (temp)
	{
		printf("Node content: %s\n", (char *)temp->content);
		temp = temp->next;
	}
	return (0);
}*/
