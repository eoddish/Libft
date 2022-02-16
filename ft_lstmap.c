/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoddish <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:55:44 by eoddish           #+#    #+#             */
/*   Updated: 2020/11/23 19:08:49 by eoddish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list *res;
	t_list *newelem;
	t_list *mapper;

	res = 0;
	mapper = lst;
	while (mapper)
	{
		newelem = ft_lstnew((*f)(mapper->content));
		if (!newelem)
		{
			ft_lstclear(&res, del);
			break ;
		}
		ft_lstadd_back(&res, newelem);
		mapper = mapper->next;
	}
	return (res);
}
