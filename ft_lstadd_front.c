#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
        return ;
    new -> next = *lst;
	(*lst) = new;
}
int	main()
{
	t_list	**a;
	t_list	*b;
	char	*c;

	a = (t_list **)malloc(sizeof(t_list **));
	a -> next = NULL;
	b = (t_list *)malloc(sizeof(t_list *));
	b -> content = "Asdasfdasf";
	b -> next = NULL;
	ft_lstadd_front(a, b);
	c = a -> content[0];
	printf("%s", c);
}
