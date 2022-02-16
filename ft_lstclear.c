/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoddish <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:03:15 by eoddish           #+#    #+#             */
/*   Updated: 2020/11/23 18:31:38 by eoddish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *clear;

	clear = *lst;
	while (clear)
	{
		(*del)(clear);
		clear = clear->next;
	}
	*lst = NULL;
}
