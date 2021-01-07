/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortdoublechar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 22:28:32 by fkarouac          #+#    #+#             */
/*   Updated: 2020/01/20 07:46:56 by fkarouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sortdoublechar(char **src)
{
	int		srclen;
	int		i;
	int		j;

	if (src == NULL)
		return ;
	srclen = ft_doublestrlen(src);
	if (srclen == 0)
		return ;
	else if (srclen == 1)
		return ;
	else
	{
		i = -1;
		while (++i < srclen - 1)
		{
			j = i + 1;
			while (j < srclen)
			{
				if (ft_strcmp(src[i], src[j]) >= 0)
					ft_strswap(&src[i], &src[j]);
				j++;
			}
		}
	}
}
