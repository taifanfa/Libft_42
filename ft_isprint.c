/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:04:40 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/18 17:46:15 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*#include <stdio.h>

int	main(void)
{
	char	test_chars[] = {'A', 'b', '1', '*', 127};
	int		i;

	i = 0;
	while (i < 5)
	{
		if (ft_isprint(test_chars[i]))
			printf("'%c' is printable.\n", test_chars[i]);
		else
			printf("'%c' is not printable.\n", test_chars[i]);
		i++;
	}
	return (0);
}
*/