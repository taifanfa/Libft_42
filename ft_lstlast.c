/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:15:41 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/24 14:23:44 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	head = NULL;
	node1 = ft_lstnew("First");
	node2 = ft_lstnew("Second");
	node3 = ft_lstnew("Third");
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	last = ft_lstlast(head);
	if (last)
		printf("Last node content: %s\n", (char *)last->content);
	else
		printf("The list is empty.\n");
	return (0);
}*/
