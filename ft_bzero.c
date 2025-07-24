/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:36:49 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:17:31 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World!";
	size_t	i;

	printf ("Before ft_bzero: %s\n", str);
	i = 0;
	ft_bzero(str, 5);
	printf ("After ft_bzero: %s\n", str);
	while (i < sizeof(str))
	{
		printf("byte %zu: %d\n", i, (unsigned char)str[i]);
		i++;
	}
	return (0);
}
*/