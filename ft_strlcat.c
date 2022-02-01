/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:20:04 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/01 14:56:41 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	if (dstsize <= sizedst)
		return (dstsize + sizesrc);
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i + sizedst] = src[i];
		i++;
	}
	dst[i + sizedst] = '\0';
	return (dstsize + sizesrc);
}
