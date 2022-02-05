#include "libft.h"

char	**ft_split_v2

int	strcount(const char *s, char c)
{
	int	i;
	int	b;

	b = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			b++;
		i++;
	}
	return(b + 1);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		wrdcnt;

	i = 0;
	j = 0;	
	wrdcnt = strcount(s,c);
	str = (char **)malloc(sizeof(char) * (wrdcnt + 1));

	return(0);
}

int	main()
{
	char a[] = "asd asf  sa  asf asif";

	ft_split(a,' ');
}
