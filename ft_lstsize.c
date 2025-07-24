/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:03:40 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/24 14:36:50 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	int		size;

	head = NULL;
	node1 = ft_lstnew("1");
	node2 = ft_lstnew("2");
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	size = ft_lstsize(head);
	printf("Size of the list: %d\n", size);
	return (0);
}*/
