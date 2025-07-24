/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:22:00 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:17:28 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
		total = 1;
	else if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	else
		total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return ((void *)ptr);
}

/*#include <stdio.h>

int	main(void)
{
	int		*arr;
	size_t	n;
	size_t	i;

	n = 5;
	i = 0;
	arr = ft_calloc(n, sizeof(int));
	if (!arr)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Array after ft_calloc:\n");
	while (i < n)
	{
		printf("arr[%zu] = %d.\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/