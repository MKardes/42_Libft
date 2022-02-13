/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:20:17 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/13 18:08:42 by mkardes          ###   ########.fr       */
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
	int	i = open("göksu.txt", O_WRONLY);
	int	a = open("emircan.txt", O_WRONLY);
	printf("%d%d",i ,a);
	ft_putchar_fd('A', 3);
	ft_putchar_fd('k', 4);
}*/
