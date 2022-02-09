/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:20:17 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/09 12:21:18 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	int i = open("göksu.txt", O_WRONLY);
	int	a = open("emircan.txt", O_WRONLY);
	ft_putchar_fd('A', i);
	ft_putchar_fd('k', a);
}
*/
