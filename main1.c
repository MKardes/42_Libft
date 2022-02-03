#include "libft.h"

int	main()
{
	const char	nstr[] = "Avutsun Bahaneler";
	const char	nstr1[] = "Bahane";
	char		*a;
	char		*b;
	char		*c;
	int			arr[]	= {2,7,3,6,4,5,9,8,7,3,4,6,5,3,4,5,2,3,7,8,7,3,6,4,5,9,8,7,8,7,2,7,3,6,4,5,9,8,7,3,4,6,5,3,4,5,2,3,7,8,7,3,6,4,5,9,8,7,8,7,0,1,2,3,4,5,6,7,8,9};
	int			*d;
	int			i;

	b = ft_strnstr(nstr, nstr1, 3);
	a = ft_strnstr(nstr, nstr1, 10);
	printf("ft_strnstr: 'Bahaneler' --> %s, '(null)' --> %s\n", a, b);
	c = ft_calloc(70, sizeof(char));
	d = ft_calloc(70, sizeof(int));
	c = "There is no rose without a thorn!";
	d = arr;
	i = 0;
	printf("%s\n",c);
	i = 0;
	while (i < 70)
		printf("%d, ",d[i++]);
	printf("\n%s,", ft_substr(c, 13,32));
}
