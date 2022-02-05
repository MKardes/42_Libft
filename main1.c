#include "libft.h"

int	main()
{
	const char	nstr[] = "Avutsun Bahaneler";
	const char	nstr1[] = "Bahane";
	char		*a;
	char		*b;
	char		*c;
	char		f[] = "Memmoryer";
	int			arr[]	= {2,7,3,6,4};
	int			*d;
	int			i;

	b = ft_strnstr(nstr, nstr1, 3);
	a = ft_strnstr(nstr, nstr1, 10);
	printf("ft_strnstr: 'Bahaneler' --> %s, '(null)' --> %s\n", a, b);
	c = ft_calloc(14, sizeof(char));
	d = ft_calloc(5, sizeof(int));
	c = "MemmoryFighter";
	d = arr;
    printf("ft_calloc:  'MemmoryFighter' --> %s, '2, 7, 3, 6, 4' --> ", c);
	i = 0;
	while (i < 5)
		printf("%d, ",d[i++]);
	printf("\nft_strtrim: 'Fighter' --> %s", ft_substr(c, 7,7));
	printf("\nft_strjoin: 'BahanelerAvutsun Bahaneler' --> %s\n", ft_strjoin(a, nstr));
	printf("ft_strtrim: 'Fight' --> %s\n", ft_strtrim(c, f));
}
