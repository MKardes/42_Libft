/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:37:26 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/01 19:44:52 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!src || !dst)
		return (0);
	if (ft_strlen(src) < len)
	{
		i = len - 1;
		while (i < len)
		{
			*(unsigned char *)(i + dst) = *(unsigned char *)(src + i);
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			*(unsigned char *)(i + dst) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}
