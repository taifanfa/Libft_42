/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:36:55 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:15:42 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
		i++;
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	const char	*str1;
	const char	*str2;
	size_t		result;

	str1 = "Hello";
	str2 = "Hellow";
	result = ft_strncmp(str1, str2, 20);
	if (result < 0)
	{
		printf("%s is less than %s\n", str1, str2);
	}
	else if (result > 0)
	{
		printf("%s is greater than %s\n", str1, str2);
	}
	else
	{
		printf("%s is equal to %s\n", str1, str2);
	}
	return (0);
}*/
