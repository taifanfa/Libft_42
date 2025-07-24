/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:25:31 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/24 14:47:41 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*#include <stdio.h>

void	del(void *content)
{
	printf("Freed content: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	char	*str = malloc(20);
	t_list	*node;

	if (!str)
		return (1);
	sprintf(str, "Test");
	node = ft_lstnew(str);
	ft_lstdelone(node, del);
	return (0);
}*/
