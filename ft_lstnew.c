/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:43:48 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/12 19:13:05 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list *));
	if (!ptr)
		return (0);
	ptr -> next = NULL;
	ptr -> content = content;
	return (ptr);
}
/*
int	main()
{
	t_list	*a;
	int		b[] = {1234,214,21,12};

	a = (t_list *)malloc(sizeof(t_list));
	a -> content = "Buralar";
	a -> next =	ft_lstnew("DAR Efendi");
	a -> next -> next = ft_lstnew(b);
	
	printf("%s\n%s\n", a -> content, a -> next -> content);
	
	int	i = 0;
	int	*v = a -> next -> next -> content;
	while (i < 4)
	{
		printf("%d, ",v[i]);
		i++;
	}
}*/
