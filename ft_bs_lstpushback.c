/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bs_lstpushback.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarracc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:48:36 by rmarracc          #+#    #+#             */
/*   Updated: 2019/02/03 14:47:41 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bs_lstpushback(t_list **alst, t_list *new)
{
	t_list *stock;

	if (alst && new)
	{
		stock = *alst;
		while (stock->next)
			stock = stock->next;
		stock->next = new;
	}
}
