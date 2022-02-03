/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:37:26 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/02 17:20:06 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_buff;
	char	*src_buff;

	dst_buff = (char *)dst;
	src_buff = (char *)src;
	ft_memcpy(dst_buff, src_buff, len);
	return (dst);
}
