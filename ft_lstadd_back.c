#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	a = *lst;
	while (a -> next != NULL)
		a = a -> next;
	a -> next = new;
}
