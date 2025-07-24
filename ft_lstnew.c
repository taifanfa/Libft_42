/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:07:37 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/24 12:18:04 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*node;
	char	*str;

	str = "Hey, 42!";
	node = ft_lstnew(str);
	if (node)
	{
		printf("Content of the node: '%s'.\n", (char *)node->content);
		printf("Next node: '%p'.\n", (void *)node->next);
	}
	else
		printf("Failed to allocate node.\n");
	free(node);
	return (0);
}*/
