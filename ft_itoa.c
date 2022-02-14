/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:45:12 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/14 12:24:00 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_writer(char *str, int bas, int n)
{
	int	i;
	int	b;
	int	c;

	i = 0;
	if (n > 9)
	{
		while (i < bas)
		{
			c = n;
			b = bas - 1 - i;
			while (b-- > 0)
				c /= 10;
			str[i++] = c % 10 + 48;
		}
	}
	else
	{
		str[i] = n + 48;
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	is_negative(int n, char *str, int bas)
{
	*str = '-';
	str++;
	str = ft_writer(str, bas, (n * -1));
	str = str - 1;
}

char	*ft_itoa(int n)
{
	int		i;
	int		a;
	int		n1;
	char	*str;

	n1 = n;
	a = 0;
	if (n1 < 0)
	{
		a = 1;
		n1 *= -1;
	}
	i = 1;
	while (n1 >= 10 && ++i)
		n1 = n1 / 10;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (i + a + 1));
	if (!str)
		return (0);
	else if (n < 0)
		is_negative(n, str, i);
	else
		ft_writer(str, i, n);
	return (str);
}
