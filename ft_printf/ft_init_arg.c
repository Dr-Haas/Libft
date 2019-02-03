/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarracc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 12:14:56 by rmarracc          #+#    #+#             */
/*   Updated: 2019/02/03 14:54:05 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_arg(t_arg *flag)
{
	flag->arg = 0;
	flag->minus = 0;
	flag->plus = 0;
	flag->diese = 0;
	flag->zero = 0;
	flag->espace = 0;
	flag->width = 0;
	flag->precision = -1;
	flag->lenght = 0;
}
