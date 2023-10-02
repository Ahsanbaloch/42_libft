/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:24:04 by ahsalam           #+#    #+#             */
/*   Updated: 2023/05/25 19:28:13 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	if (*lst)
	{
		while (*lst)
		{
			last = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = last;
		}
	}
}
