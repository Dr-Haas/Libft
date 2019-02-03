/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarracc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:49:48 by rmarracc          #+#    #+#             */
/*   Updated: 2019/02/03 14:50:50 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char			*ptr;
	unsigned int	i;

	if (!s)
		return ;
	ptr = s;
	i = 0;
	while (*ptr && f)
	{
		f(i, ptr);
		ptr++;
		i++;
	}
}
