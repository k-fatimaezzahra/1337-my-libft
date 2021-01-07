/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 00:16:29 by fkarouac          #+#    #+#             */
/*   Updated: 2020/02/07 00:08:48 by fkarouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	char	*str;
	int		len;

	str = NULL;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = ft_strnew(len)))
		return (0);
	str = ft_strcpy(str, (const char *)s1);
	str = ft_strncat(str, (const char *)s2, n);
	return (str);
}
