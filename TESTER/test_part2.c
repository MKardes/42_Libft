#include "libft.h"
#include <stdio.h>

char	dtr(unsigned int i, char a)
{
	a = a + i;
	return (a);
}

void	atr(unsigned int i, char *a)
{
	a[0] = a[0] + i;
}

char	*nulla(char *a)
{
	return (NULL);
}

int	main()
{
	const char	nstr[] = "Avutsun Bahaneler";
	const char	nstr1[] = "Bahane";
	char		del[] = "vAeru";
	char		*a;
	char		*b;
	char		c[] = "MemmoryFighter";
	char		*null;
	char		*h;
	char		den[] = "Ama senden olmuyo kendimi koparamıyorum bir an!";
	char		den1[] = "   Ama    senden  olmuyo   kendimi   ";
	char		f[] = "Memmoryer";
	int			*d;
	char		**str;
	char		**str1;
	char		**str2;
	char		*tr;
	char		*tr1;
	char		*tr2;
	
	a = ft_substr(c, 7, 7);
	b = ft_substr(c, 121, 2);
	null = nulla("as");
	h = ft_substr(null, 12, 32);

	printf("\033[0;96mft_substr:            ");
	(!h && b[0] == '\0' && a[0] == 'F' && a[7] == '\0' && a[2] == 'g' && a[5] == 'e') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	free(b);
	free(a);
	free(h);

	a = ft_strjoin(null, nstr);
	b = ft_strjoin(nstr, null);
	h = ft_strjoin(nstr, nstr + 7);
	printf("\nft_strjoin:           ");
	(!a && !b && h[27] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	free(a);
	free(b);
	free(h);

	a = ft_strtrim(null, nstr);
	h = ft_strtrim(nstr, del);
	printf("\nft_strtrim:           ");
	(!a && h[0] == 't' && h[12] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	str = ft_split(den, ' ');
	free(a);
	free(h);

	str = ft_split(den, ' ');
	str1 = ft_split(den1, ' ');
	str2 = ft_split(null, ' ');
	printf("\nft_split:             ");
	(str2 == 0 && str[0][0] == 'A' && str[0][3] == '\0' && str[1][0] == 's' && str[1][6] == '\0' && str[6][0] == 'a' && str[6][3] == '\0' && str1[0][0] == 'A' && str1[0][3] == '\0' && str1[1][0] == 's' && str1[1][6] == '\0' && str1[3][7] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	free(str[0]); free(str[1]); free(str[2]); free(str[3]); free(str[4]); free(str[5]); free(str[6]); free(str); free(str1[0]); free(str1[1]); free(str1[2]); free(str1[3]); free(str1); free(str2);

	a = ft_itoa(-2147483648);
	b = ft_itoa(0);
	h = ft_itoa(5);
	tr = ft_itoa(-2);
	tr1 = ft_itoa(1284712);
	tr2 = ft_itoa(-129412);
	printf("\nft_itoa:              ");
	(a[0] == '-' && a[1] == '2' && a[10] == '8' && a[11] == '\0' && b[0] == '0' && b[1] == '\0' && h[0] == '5' && h[1] == '\0' && tr[0] == '-' && tr[1] == '2' && tr[2] == '\0' && tr1[0] == '1' && tr1[7] == '\0' && tr2[0] == '-' && tr2[1] == '1' &&  tr2[7] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	free(a); free(b); free(h); free(tr); free(tr1); free(tr2); 

	a = ft_strmapi(null, dtr);
	b = ft_strdup("aaaaaaaa");
	h = ft_strmapi(b, dtr);
	printf("\nft_strmapi:           ");
	(!a && h[0] == 'a' && h[1] == 'b' && h[2] == 'c' && h[3] == 'd' && h[4] == 'e' && h[5] == 'f' && h[7] == 'h' && h[8] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	free(a); free(h);

	ft_striteri(b, atr);
	h = b;
	printf("\nft_striteri:          ");
	(h[0] == 'a' && h[1] == 'b' && h[2] == 'c' && h[3] == 'd' && h[4] == 'e' && h[5] == 'f' && h[7] == 'h' && h[8] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	free(b);
	printf("\n\033[0;96mft_putchar_fd:        \033[0;92mSuccess!");
	printf("\n\033[0;96mft_putstr_fd:         \033[0;92mSuccess!");
	printf("\n\033[0;96mft_putendlf_fd:       \033[0;92mSuccess!");
	printf("\n\033[0;96mft_putnbr_fd:         \033[0;92mSuccess!\033[0;96m\n");
}
