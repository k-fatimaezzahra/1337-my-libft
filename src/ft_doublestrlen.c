/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublestrlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 22:25:09 by fkarouac          #+#    #+#             */
/*   Updated: 2020/01/20 07:45:14 by fkarouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_doublestrlen(char **src)
{
	int		len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}
