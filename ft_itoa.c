/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:16:01 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/24 11:29:35 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (--len >= 0 && str[len] != '-')
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	int		test[] = {0, -42, 123456789, -123456789, -2147483648, 2147483647};
	char	*str;
	int		i;

	i = 0;
	while (i < 7)
	{
		str = ft_itoa(test[i]);
		if (str)
		{
			printf("ft_itoa(%d) = '%s'.\n", test[i], str);
			free(str);
		}
		else
			printf("Error on memory (ft_itoa(%d)).\n", test[i]);
		i++;
	}
	return (0);
}*/
