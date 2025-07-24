/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:11:43 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:15:55 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = 0;
	dst_len = 0;
	i = 0;
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dst_len == size)
		return (size + src_len);
	while (src[i] != '\0' && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	buffer[20];
// 	size_t	ret;

// 	strcpy(buffer, "Hello");
//     ret = ft_strlcat(buffer, " World!", sizeof(buffer));
// 	printf("ft_strlcat: result='%s', return=%zu\n", buffer, ret);

// 	strcpy(buffer, "Hello");
//     ret = ft_strlcat(buffer, " World!", 8);
// 	printf("ft_strlcat (size=8): result='%s', return=%zu\n", buffer, ret);

// 	return (0);
// }
