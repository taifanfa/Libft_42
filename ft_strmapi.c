/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:52:17 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 15:10:12 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*char	ft_to_upper_even_test(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char	*original;
	char	*test;

	original = "abcdefghijk1";
	test = ft_strmapi(original, ft_to_upper_even_test);
	if (!test)
	{
		printf("Error on memory");
		return (1);
	}
	printf ("Original: '%s'\n", original);
	printf("Test: '%s'\n", test);
	free(test);
	return (0);
}*/
