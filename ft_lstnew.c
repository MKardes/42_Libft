#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;
	ptr = (t_list *)malloc(sizeof(t_list *));
if (!ptr)
	return (0);
ptr -> next = NULL;
ptr -> content = content;
return(ptr);
}
/*
int	main()
{
t_list	*a;
int		b[] = {1234,214,21,12};
a = (t_list *)malloc(sizeof(t_list *));
a -> content = "Buralar";
a -> next =	ft_lstnew("DAR Efendi");
a -> next -> next = ft_lstnew(b);
printf("%s %s\n", a -> content, a -> next -> content);
int	i = 0;
int	*v = a -> next -> next -> content;
while (i < 4)
{
	printf("%d, ",v[i]);
	i++;
}
}*/
