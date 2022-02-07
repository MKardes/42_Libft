#include "libft.h"

int	main()
{
	const char	nstr[] = "Avutsun Bahaneler";
	const char	nstr1[] = "Bahane";
	char		*a;
	char		*b;
	char		*c;
	char		den[] = "Ama senden olmuyo kendimi koparamıyorum bir an!";
	char		f[] = "Memmoryer";
	int			arr[]	= {2,7,3,6,4};
	int			*d;
	int			i;
	char		**str;
	
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
	printf("\nft_substr:  'Fighter' --> %s", ft_substr(c, 7,7));
	printf("\nft_strjoin: 'BahanelerAvutsun Bahaneler' --> %s\n", ft_strjoin(a, nstr));
	printf("ft_strtrim: 'Fight' --> %s\n", ft_strtrim(c, f));
	str = ft_split(den, ' ');
	printf("ft_split: 'Ama-senden-olmuyo-kendimi-koparamıyorum-bir-an!' --> %s-%s-%s-%s-%s-%s-%s\n",str[0], str[1], str[2], str[3], str[4], str[5], str[6]);
}
