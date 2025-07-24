/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:49:44 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 14:05:21 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s2 || !s2)
		return (NULL);
	joined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (NULL);
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*result;

	s1 = "Hello ";
	s2 = "World!";
	result = ft_strjoin(s1, s2);
	if (result == NULL)
	{
		printf("Error on memory.\n");
		return (1);
	}
	printf("Result: %s\n", result);
	free(result);
	return (0);
}*/
