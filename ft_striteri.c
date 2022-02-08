#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	ft_ft(unsigned int i, char *a)
{
	*a = *a + i;
}

int	main()
{
	char	a[] = "aaaaaa";

	ft_striteri(a, &ft_ft);
	printf("%s", a);
}
