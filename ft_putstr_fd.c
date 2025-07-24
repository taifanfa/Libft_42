/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:53:20 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:24:03 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s)
		write (fd, s++, 1);
}

/*int	main(void)
{
	int	fd;

	ft_putstr_fd("Hello \n", 1);
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (1);
	ft_putstr_fd("42 Network!\n", fd);
	close(fd);
	return (0);
}*/
