/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:37:38 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:16:44 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*source;
	unsigned char		*destination;

	if (!dest && !src)
		return (dest);
	destination = (unsigned char *)dest;
	source = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Libft!";
	char	src2[] = {"\0"};
	char	dst[20];
	char	dst2[20];

	memcpy(dst, src2, 7);
	ft_memcpy(dst2, src2, 7);
	printf("Result: '%s'.\n", dst);
	printf("Result: '%s'.\n", dst2);
	return (0);
}*/
