#include "../LIB/libft.h"
#include <stdio.h>

void	ft_dels(void *a)
{
	ft_bzero(a, ft_strlen(a));
}

void	ft_iter(void *a)
{
	((unsigned char *)a)[0] = '_';
}

void	*ft_map(void *a)
{
	return ("AMED");
}

int	main()
{
    t_list	*elem;
    t_list	*elem2;
    t_list	*elem3;
    t_list	*elem4;
	t_list	*elem6;
    t_list	*list;
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*tmp3;
	t_list	*dene;
	t_list	*dene1;

    char	s1[] = "birinci";
    char	s2[] = "ikinci";
	char	s3[] = "üçüncü";
	char	s4[] = "dördüncü";
	char	s5[] = "LAST";

	char	*a;
	char	*b;
	char	*c;
	int		d;

	list  = elem;
    elem  = ft_lstnew(s1);
    elem2 = ft_lstnew(s2);
    elem3 = ft_lstnew(s3);
    elem4 = ft_lstnew(s4);
	elem6 = ft_lstnew(s5);

	a = elem -> content;
	b = elem2 -> content;
	printf("\033[0;96mft_lstnew:            ");
	(elem -> next == NULL && a[0] == 'b' && a[3] == 'i' && a[5] == 'c' && a[7] == '\0' && b[0] == 'i' && b[1] == 'k' && b[6] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");

	ft_lstadd_front(&list, elem);
	ft_lstadd_front(&list, elem2);
	ft_lstadd_front(&list, elem3);
	ft_lstadd_front(&list, elem4);
	ft_lstadd_back(&list, elem6);

	printf("\nft_lstadd_front:      ");
	(elem2 -> next == elem && elem3 -> next == elem2) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	
	d = ft_lstsize(list);
	printf("\nft_lstsize:           ");
	(d == 5) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");

	tmp = ft_lstlast(elem4);
	a = tmp -> content;
	tmp2 = NULL;
	printf("\nft_lstlast:           ");
	(!tmp2 && tmp -> next == NULL && a[0] == 'L' && a[1] == 'A' && a[3] == 'T' && a[4] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");

	char	p[] = "DENEDIK";
	dene = NULL;
	dene1 = ft_lstnew(p);
	ft_lstadd_back(&dene,dene1);
	char	*q = dene -> content;
	printf("\nft_lstadd_back:       ");
	(elem -> next == elem6 && dene -> next == NULL && q[0] == 'D' && q[4] == 'D' && q[7] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");

	ft_lstdelone(elem3, ft_dels);
	a = elem3 -> content;
	printf("\nft_lstdelone:         ");
	(!*a) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	elem4 -> next = elem2;

	ft_lstclear(&list, ft_dels);
	printf("\nft_lstclear:          ");
	(!list) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	
	char	s6[] = "birinci";
    char	s7[] = "ikinci";
	char	s8[] = "Uçüncü";
	char	s9[] = "dördüncü";
	char	s10[] = "LAST";

	elem  = ft_lstnew(s6);
    elem2 = ft_lstnew(s7);
    elem3 = ft_lstnew(s8);
    elem4 = ft_lstnew(s9);
	elem6 = ft_lstnew(s10);
	ft_lstadd_front(&list, elem);
	ft_lstadd_front(&list, elem2);
	ft_lstadd_front(&list, elem3);
	ft_lstadd_front(&list, elem4);
	ft_lstadd_back(&list, elem6);

	ft_lstiter(list, ft_iter);
	printf("\nft_lstiter:           ");
	(s6[0] == '_' && s8[0] == '_' && s10[0] == '_') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");

	list = elem4;
	tmp3 = ft_lstmap(list, ft_map, ft_dels);
	a = tmp3 -> next -> next -> content;
	printf("\nft_lstmap:            ");
	(tmp3 -> next -> next -> next -> next -> next == 0 && a[0] == 'A' && a[2] == 'E' && a[4] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m\n") : printf("\033[0;91mFail!\033[0;96m\n");
	
 	return (0);
}
