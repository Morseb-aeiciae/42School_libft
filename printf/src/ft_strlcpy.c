/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorel <smorel@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:01:57 by smorel            #+#    #+#             */
/*   Updated: 2020/12/15 00:28:30 by smorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len_s;

	if (!src)
		return (0);
	len_s = ft_strlen(src);
	if (size)
	{
		size = len_s + 1 < size ? len_s + 1 : size;
		ft_bzero(dst, size);
		ft_memmove(dst, src, size - 1);
	}
	return (len_s);
}
