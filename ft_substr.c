/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:25:11 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/04 11:57:32 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	if (!s)
		return (0);
	a = (char *)malloc(sizeof(char) * len + 1);
	if (!a)
		return (0);
	i = start;
	ft_strlcpy(a, s + start, len + 1);
	return (a);
}
