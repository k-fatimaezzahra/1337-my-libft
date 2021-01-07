/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublefree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 19:39:13 by fkarouac          #+#    #+#             */
/*   Updated: 2020/01/20 07:44:26 by fkarouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_doublefree(char ***str)
{
	int		i;

	i = 0;
	while ((*str)[i])
	{
		ft_strdel(&(*str)[i]);
		i++;
	}
	ft_strdel(&(*str)[i]);
	free(*str);
	*str = NULL;
}
