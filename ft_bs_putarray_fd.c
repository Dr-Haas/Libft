/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bs_putarray_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarracc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:51:12 by rmarracc          #+#    #+#             */
/*   Updated: 2019/02/03 14:47:50 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bs_putarray_fd(char **grid, int fd)
{
	int i;

	if (!grid)
		return ;
	i = 0;
	while (grid[i])
	{
		ft_putendl_fd(grid[i], fd);
		i++;
	}
}
