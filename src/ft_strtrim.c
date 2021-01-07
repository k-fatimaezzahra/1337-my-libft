/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 00:56:22 by fkarouac          #+#    #+#             */
/*   Updated: 2020/12/30 19:04:47 by fkarouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;
	char		*str;

	start = 0;
	str = NULL;
	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n') && end)
		end--;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	if (end < start)
		return (ft_strnew(0));
	end = end - start;
	str = ft_strsub(s, start, end + 1);
	return (str);
}
