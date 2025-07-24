/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:14:10 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:15:38 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	const char	*big = "Hello, 42 network!";
	const char	*little = "42";
	char		*result;

	result = ft_strnstr(big, little, 15);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found.\n");
	result = ft_strnstr(big, "net", 12);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found.\n");
	return (0);
}
*/