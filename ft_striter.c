/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarracc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:49:15 by rmarracc          #+#    #+#             */
/*   Updated: 2019/02/03 14:50:12 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;

	if (!s)
		return ;
	ptr = s;
	while (*ptr && f)
	{
		f(ptr);
		ptr++;
	}
}
