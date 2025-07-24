/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:50:19 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:16:07 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	const char	*str;
	const char	*test1;

	str = "hello world";
	test1 = ft_strchr(str, 'o');
	if (test1)
		printf("Found 'o' in '%s'.\n", str);
	else
		printf("'o' not found.\n");
	return (0);
}
*/