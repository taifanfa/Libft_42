/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:42:53 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/26 14:45:13 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_del(t_list **new_list, void (*del)(void *))
{
	t_list	*temp;

	while (*new_list)
	{
		temp = *new_list;
		*new_list = (*new_list)->next;
		if (del)
			del(temp->content);
		free(temp);
	}
}

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	**last_node;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	last_node = &new_list;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_del(&new_list, del);
			return (NULL);
		}
		*last_node = new_node;
		last_node = &new_node->next;
		lst = lst->next;
	}
	return (new_list);
}
