/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:43:29 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:17:23 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') \
	|| (c >= '0' && c <= '9')));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test_chars[] = {'A', 'b', '1', '*', 'z'};
// 	int		i;

// 	i = 0;
// 	while (i < 5)
// 	{
// 		if (ft_isalnum(test_chars[i]))
// 			printf("'%c' is an alphabetic character.\n", test_chars[i]);
// 		else
// 			printf("'%c' is not an alphabetic character.\n", test_chars[i]);
// 		i++;
// 	}
// 	return (0);
// }
