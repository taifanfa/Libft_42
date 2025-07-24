/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:31:15 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 14:47:49 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && ft_isinset(s1[start], set))
		start++;
	while (end > start && ft_isinset(s1[end - 1], set))
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	while (i < end - start)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str1 = "    Hello World!H  ";
	char	*set = "H ";
	char	*trimmed = ft_strtrim(str1, set);

	if (trimmed)
	{
		printf("Original: '%s'.\n", str1);
		printf("Trimmed: '%s'.\n", trimmed);
		free(trimmed);
	}
	else
		printf("Error on memory.\n");
	return (0);
}*/
