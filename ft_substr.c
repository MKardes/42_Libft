/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:25:11 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/08 13:57:25 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*a;
	size_t			i;

	if (!s)
		return (NULL);
	a = (char *)malloc(sizeof(char) * len + 1);
	if (!a)
		return (0);
	i = start;
	ft_strlcpy(a, s + start, len + 1);
	return (a);
}

/*char	*ft_substr1(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	if(!s)
		return (NULL);
	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

int	main()
{
	printf("*%s*\n",ft_substr("tripouille", 42, 42000000));
	printf("*%s*\n",ft_substr1("tripouille", 42, 42000000));
}*/
