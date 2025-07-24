/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:56:31 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:17:20 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test_chars[] = {'A', 'b', '1', '*', 'z'};
// 	int		i;

// 	i = 0;
// 	while (i < 5)
// 	{
// 		if (ft_isalpha(test_chars[i]))
// 			printf("'%c' is an alphabetic character.\n", test_chars[i]);
// 		else
// 			printf("'%c' is not an alphabetic character.\n", test_chars[i]);
// 		i++;
// 	}
// 	return (0);
// }
