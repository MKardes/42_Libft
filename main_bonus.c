#include "libft.h"

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

	//elem->next = elem2;
	//elem2->next = elem3;
	//elem3->next = elem4;

	ft_lstadd_front(&list, elem);
	ft_lstadd_front(&list, elem2);
	ft_lstadd_front(&list, elem3);
	ft_lstadd_front(&list, elem4);
	ft_lstadd_back(&list, elem6);

	printf("%d", ft_lstsize(list));

	list = elem4;

	elem5 = ft_lstlast(list);

	printf("\n*%s*\n\n", elem5 -> content);
	list = elem4;

	puts((char *)list->content);
	while (list->next != NULL)
	{
		list = list->next;
		puts((char *)list->content);
	}

	return (0);
}
