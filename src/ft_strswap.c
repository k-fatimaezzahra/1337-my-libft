/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:03:26 by fkarouac          #+#    #+#             */
/*   Updated: 2020/01/20 08:06:53 by fkarouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strswap(char **s1, char **s2)
{
	char	*tmp;

	tmp = ft_strdup(*s1);
	ft_strdel(s1);
	*s1 = ft_strdup(*s2);
	ft_strdel(s2);
	*s2 = ft_strdup(tmp);
	ft_strdel(&tmp);
}
