/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:55:02 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:17:16 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include <stdio.h>

int	main(void)
{
	char	test_chars[] = {'A', '\t', '1', '*', 129};
	int		i;

	i = 0;
	while (i < 5)
	{
		if (ft_isascii(test_chars[i]))
			printf("'%c' is an alphabetic character.\n", test_chars[i]);
		else
			printf("'%c' is not an alphabetic character.\n", test_chars[i]);
		i++;
	}
	return (0);
}
*/