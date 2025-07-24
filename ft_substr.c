/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:08:35 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 14:23:42 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	array = (char *)malloc(len + 1);
	if (!array)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s = "42 School is cool!";
	char	*sub1 = ft_substr(s, 3, 6);
	char	*sub2 = ft_substr(s, 0, 2);
	char	*sub3 = ft_substr(s, 50, 5);
	char	*sub4 = ft_substr(s, 5, 100);

	printf("sub1: '%s'\n", sub1);
	printf("sub2: '%s'\n", sub2);
	printf("sub3: '%s'\n", sub3);
	printf("sub4: '%s'\n", sub4);
	free(sub1);
	free(sub2);
	free(sub3);
	free(sub4);
	return (0);
}*/
