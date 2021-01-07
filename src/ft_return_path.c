/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_path.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 18:04:52 by f-z               #+#    #+#             */
/*   Updated: 2020/01/20 07:45:53 by fkarouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_return_path(char *str)
{
	int		i;

	i = ft_strlen(str) - 1;
	while (i >= 0 && str[i] == '/')
		i--;
	while (i >= 0 && str[i] != '/')
		i--;
	if (i < 0)
		return (ft_strdup(""));
	return (ft_strsub(str, 0, i + 1));
}
