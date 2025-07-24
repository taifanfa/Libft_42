/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:51:18 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 15:02:27 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	result;
	int result2;

	if (argc == 1)
	{
		printf("Use numbers as strings\n");
		return (0);
	}
	i = 1;
	if (i < argc)
	{
		result = ft_atoi(argv[i]);
		result2 = atoi(argv[i]);
		printf("input: '%s' -> ft_atoi: '%d'\n", argv[i], result);
		printf("input: '%s' -> atoi: '%d'\n", argv[i], result2);
		i++;
	}
	return (0);
}*/
