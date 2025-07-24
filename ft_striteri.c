/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:31:01 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:46:33 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	ft_even_to_upper_test(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hello world";

	printf("Before: '%s'.\n", str);
	ft_striteri(str, ft_even_to_upper_test);
	printf("After apllying function: '%s'.\n", str);
	return (0);
}*/
