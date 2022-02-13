#include "libft.h"

void	ft_dels(void *a)
{
	ft_bzero(a, ft_strlen(a));
}

void	ft_iter(void *a)
{
	((unsigned char *)a)[0] = 'A';
}

int	main()
{
    t_list      *elem;
    t_list      *elem2;
    t_list      *elem3;
    t_list      *elem4;
	t_list		*elem5;
	t_list		*elem6;

    t_list      *list;
    char	s1[] = "birinci";
    char	s2[] = "ikinci";
	char	s3[] = "üçüncü";
	char	s4[] = "dördüncü";
	char	s5[] = "LAST";

	list = elem;
    elem = ft_lstnew(s1);
    elem2 = ft_lstnew(s2);
    elem3 = ft_lstnew(s3);
    elem4 = ft_lstnew(s4);
	elem6 = ft_lstnew(s5);

	ft_lstadd_front(&list, elem);
	ft_lstadd_front(&list, elem2);
	ft_lstadd_front(&list, elem3);
	ft_lstadd_front(&list, elem4);
	ft_lstadd_back(&list, elem6);

	printf("SIZE   --> %d", ft_lstsize(list));

	list = elem4;

	elem5 = ft_lstlast(list);

	printf("\n'LAST' --> %s\n\n", elem5 -> content);
	list = elem4;

	puts((char *)list->content);
	while (list->next != NULL)
	{
		list = list->next;
		puts((char *)list->content);
	}

	ft_lstdelone(elem3, ft_dels);

	printf("\n¨¨¨¨DEL ONE¨¨¨¨¨\n");
	list = elem4;
	while (list != NULL)
	{
		printf("%s\n", list -> content);
		list = list -> next;
	}

	list = elem4;
	//ft_lstiter(list, ft_iter);
	printf("\n¨¨¨¨ITER¨¨¨¨\n");
	while (list != NULL)
	{
		printf("%s\n", list -> content);
		list = list -> next;
	}
	list = elem4;
	//ft_lstclear(&list, ft_dels);
	printf("\n¨¨¨¨CLEAR¨¨¨¨\n");
	while (list != NULL)
	{
		printf("%s\n", list -> content);
		list = list -> next;
	}
	return (0);
}
