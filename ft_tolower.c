/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarracc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:45:17 by rmarracc          #+#    #+#             */
/*   Updated: 2019/02/03 14:51:38 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	if (c != -1 && c < 127 && c > -129)
		c = (char)c;
	return ((c >= 'A' && c <= 'Z') ? (c + 32) : c);
}