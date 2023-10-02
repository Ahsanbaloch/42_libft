/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:58:20 by ahsalam           #+#    #+#             */
/*   Updated: 2023/05/22 20:11:08 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c;

	i = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10 * i, fd);
	c = '0' + n % 10 * i;
	ft_putchar_fd(c, fd);
}
