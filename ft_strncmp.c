/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:45:44 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/14 10:32:02 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	a;

	i = 0;
	a = 0;
	if (n == 0)
		return (0);
	while (i < n && !a && s1 != 0 && s2 != 0)
	{
		a = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (!a && i < n && s1 == 0 && s2 == 0)
		a = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (a);
}
