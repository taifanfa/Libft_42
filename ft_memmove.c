/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:19:26 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:16:39 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "1234567890";
	char	dest1[11];

	ft_memmove(dest1, str, 11);
	printf("Copy: '%s'.\n", dest1);
	ft_memmove(str + 4, str, 6);
	printf("Overlap copy: '%s'.\n", str);
	return (0);
}
*/