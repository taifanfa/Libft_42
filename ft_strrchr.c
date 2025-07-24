/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:13:56 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:15:32 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*last;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = (char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return ((char *)last);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*str;
	const char	*test1;
	const char	*test2;

	str = "hello";
	test1 = ft_strrchr(str, 'l');
	//test2 = strrchr(str, 0);
		printf("Found 'l' in '%s': '%s'.\n", str, test1);
	//	printf("Found '0' in '%s': '%s'.\n", str, test2);
		printf("%s\n", str + 1);
	return (0);
}*/
