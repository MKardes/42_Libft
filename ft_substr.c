/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:25:11 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/03 20:31:18 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	a = (char *)malloc(sizeof(char) * len + 1);
	i = start;
	while (i < len && s[i] != '\0')
	{
		a[i - start] = s[i]; 
		i++;
	}
	return (a);
}
