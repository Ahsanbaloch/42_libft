/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:02:56 by ahsalam           #+#    #+#             */
/*   Updated: 2023/05/22 14:00:42 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_alct(int len)
{
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (str);
}

static void	ft_str(char *str, int n, int ng)
{
	int	len;

	len = ft_len(n);
	if (n == 0)
		str[0] = '0';
	else if (ng)
	{
		str[0] = '-';
		while (n != 0)
		{
			str[--len] = '0' - (n % 10);
			n /= 10;
		}
	}
	else
	{
		while (n != 0)
		{
			str[--len] = '0' + (n % 10);
			n /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	int		ng;
	int		len;
	char	*str;

	if (n < 0)
		ng = 1;
	else
		ng = 0;
	len = ft_len(n);
	str = ft_alct(len);
	if (!str)
		return (NULL);
	ft_str(str, n, ng);
	return (str);
}
