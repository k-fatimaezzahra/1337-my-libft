/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarouac <fkarouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 00:33:26 by fkarouac          #+#    #+#             */
/*   Updated: 2020/01/20 07:44:48 by fkarouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_creat_path(char *src, char *file_name)
{
	char	*str;
	int		len;

	if (!src || !file_name)
		return (0);
	len = ft_strlen(src) + ft_strlen(file_name) + 1;
	if (!(str = ft_strnew(len)))
		return (0);
	str = ft_strcpy(str, src);
	str = ft_strcat(str, "/");
	str = ft_strcat(str, file_name);
	return (str);
}
