/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 07:30:42 by moguy             #+#    #+#             */
/*   Updated: 2019/07/22 00:39:25 by moguy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

unsigned int	ps_lstlen(t_stack *lst)
{
	t_stack			*tmp;
	unsigned int	ret;

	ret = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		ret++;
	}
	return (ret);
}
