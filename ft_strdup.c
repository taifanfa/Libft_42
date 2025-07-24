/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:46:34 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:16:00 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*copy;
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*#include <stdio.h>

int	main(void)
{
	const char	*s;
	char		*copy;
	int			len;

	s = "Hello World!";
	copy = ft_strdup(s);
	if (copy)
	{
		printf("S: %s\n", s);
		printf("Copy: %s\n", copy);
		free(copy);
	}
	else
		printf("Error on Memory");
	return (0);
}
*/