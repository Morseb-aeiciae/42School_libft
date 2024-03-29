/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel_2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorel <smorel@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:01:57 by smorel            #+#    #+#             */
/*   Updated: 2020/11/20 20:02:05 by smorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			**ft_memdel_2d(void **s, int i)
{
	while (i--)
		free(s[i]);
	free(s);
	return (NULL);
}
