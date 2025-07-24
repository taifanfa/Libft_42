/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:54:32 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:17:08 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	const char	*str = "Hello, 42 School!";
	char		*res;

	res = ft_memchr(str, '4', 10);
	if (res)
		printf("Found char '4' at: %s.\n", res);
	else
		printf("Char '4' not found.\n");
	res = ft_memchr(str, 'S', 5);
	if (res)
		printf("Found chear 'S' at: %s.\n", res);
	else
		printf("Char 'S' not found!\n");
	return (0);
}*/
