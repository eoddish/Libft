/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoddish <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 21:44:57 by eoddish           #+#    #+#             */
/*   Updated: 2020/11/15 17:27:37 by eoddish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*counter;

	i = 0;
	counter = lst;
	while (counter)
	{
		counter = counter->next;
		i++;
	}
	return (i);
}
