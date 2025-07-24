/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:41:06 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:15:26 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	char test[] = {'A', 'b', 'C', '1'};
	int i;

	i = 0;
	while (i < 4)
	{
		printf("'%c' is now '%c'.\n", test[i], ft_tolower(test[i]));
		i++;
	}
	return (0);
}
*/