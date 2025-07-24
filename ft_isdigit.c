/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:36:18 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:17:13 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*#include <stdio.h>

int	main(void)
{
	char	test_chars[] = {'A', 'b', '1', '*', 'z'};
	int		i;

	i = 0;
	while (i < 5)
	{
		if (ft_isdigit(test_chars[i]))
			printf("'%c' is a digit.\n", test_chars[i]);
		else
			printf("'%c' is not a digit.\n", test_chars[i]);
		i++;
	}
	return (0);
}
*/