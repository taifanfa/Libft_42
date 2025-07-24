/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:39:45 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/23 12:19:47 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (fd < 0)
		return ;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}

/*int	main(void)
{
	int	fd;

	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-12345, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (1);
	ft_putnbr_fd(2147483647, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-2147483648, fd);
	ft_putchar_fd('\n', fd);
	close(fd);
	return (0);
}*/
