/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 10:08:35 by ahsalam           #+#    #+#             */
/*   Updated: 2023/05/22 12:25:05 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	*str;

	i = 0;
	while (s1[i] && ft_set(s1[i], set))
		i++;
	len = ft_strlen(s1);
	while (i < len && ft_set(s1[len - 1], set))
		len--;
	str = malloc((len - i + 1) * sizeof(*s1));
	if (!str)
		return (NULL);
	j = 0;
	while (i < len)
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
