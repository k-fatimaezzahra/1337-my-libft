/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdoubledup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:10:13 by fkarouac          #+#    #+#             */
/*   Updated: 2020/02/04 17:08:07 by fkarouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strdoubledup(char **av)
{
	char	**avdup;
	int		i;

	avdup = NULL;
	if (!(avdup = (char **)malloc(sizeof(char *) * (ft_doublestrlen(av) + 1))))
		return (NULL);
	i = 0;
	while (av[i])
	{
		avdup[i] = ft_strdup(av[i]);
		i++;
	}
	avdup[i] = NULL;
	return (avdup);
}
