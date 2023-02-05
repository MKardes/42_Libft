#include "../LIB/libft.h"
#include <stdio.h>

int	main(void)
{
	const char	*str = "ASD";
	char		*str1;
	char		*lcpy;
	char		memset[] = "abcdefg";
	char		*memset_last;
	char		*bzero;
	char		memcpy1[] = "qwrq124";
	char		*memcpy;
	char		move1[] = "denemeler";
	char		move_1[] = "denemeler";
	char		move2[] = "anla";
	char		move4[] = "Ferrari";
	char		*move3;
	char		*move5;
	char		cmp1[] = "denemeler";
	char		cmp2[] = "denemeci";
	char		cmp3[] = "denemec";
	int			cmpint1[] = {1, 2, 3, 12};
	int			cmpint2[] = {1, 2, 3, 5};
	char		*str_chr;
	char		*str_r_chr;
	const char	strncmp1[] = "deneyler";
	const char	strncmp2[] = "deneyciler";
	const char	nstr[] = "Avutsun Bahaneler";
	const char	nstr1[] = "Bahane";
	char		lcat1[] = "Clementine";
	const char	lcat2[] = "_Cleo";
	char		lcat3[] = "Clementine";
	char		lcat4[] = "Clementine";
	char		lcat5[] = "Clementine";
	char		lcat6[] = "Clementine";
	size_t		lcpy_len;
	char		*suar;
	int			arr[] = {2, 7, 3, 6, 4};
	int			*arr2;
	char		*arr3;
	char		*a;
	char		*b;
	char		*emirhan;

	b = ft_strnstr(nstr, nstr1, 3);
	emirhan = ft_strnstr(nstr, nstr1, 14);
	a = ft_strnstr(nstr, nstr1, 10);
	lcpy = (char *)malloc(4);
	str1 = ft_strdup(str);
	printf("\033[0;96mft_isalpha:           ");
	(ft_isalpha('H') == 1 && ft_isalpha('j') == 1 && ft_isalpha('1') == 0) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	printf("\nft_isdigit:           ");
    (ft_isdigit('4') == 1 && ft_isdigit('.') == 0) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	printf("\nft_isalnum:           ");
	(ft_isalnum('A') == 1 && ft_isalnum('.') == 0 && ft_isalnum('1') == 1) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	printf("\nft_isascii:           ");
	(ft_isascii('A') == 1 && ft_isascii(128) == 0 && ft_isascii(-12) == 0) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	printf("\nft_isprint:           ");
	(ft_isprint(32) == 1 && ft_isprint(24) == 0 && ft_isprint(127) == 0) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");    
	printf("\nft_strlen:            ");
	(ft_strlen("asaws") == 5 && ft_strlen("") == 0) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");    
	printf("\nft_toupper:           ");
	(ft_toupper('a') == 'A' && ft_toupper('G') == 'G') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	printf("\nft_tolower:           ");
	(ft_tolower('a') == 'a' && ft_tolower('G') == 'g') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	printf("\nft_atoi:              ");
	(ft_atoi("  -123") == -123 && ft_atoi("\t\r+574") == 574 && ft_atoi("-+2214") == 0 && ft_atoi("asd1213") == 0) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	printf("\nft_strdup:            ");
	(str[0] == str1[0] && str[2] == str1[2]) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	free(str1);
	lcpy_len = ft_strlcpy(lcpy, str, 3);
	printf("\nft_strlcpy:           ");
	(lcpy_len == 3 && lcpy[0] == str[0] && lcpy[1] == str[1] && lcpy[2] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	free(lcpy);
	ft_strlcat(lcat1, lcat2, 16);
	ft_strlcat(lcat3, lcat2, 10);
	printf("\nft_strlcat:           ");
	(ft_strlcat(lcat4, lcat2, 15) == 15 && ft_strlcat(lcat5, lcat2, 17) == 15 && ft_strlcat(lcat6, lcat2, 6) == 11) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	memset_last = ft_memset(memset, 'x', 5);
	printf("\nft_memset:            ");
	(memset_last[0] == 'x' && memset_last[3] == 'x' && memset_last[4] == 'x' && memset_last[5] == 'f' && memset_last[6] == 'g') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	ft_bzero(memset, 5);
	bzero = memset;
	printf("\nft_bzero:             ");
	(bzero[0] == '\0' && bzero[3] == '\0' && bzero[4] == 0 && bzero[5] == 'f' && bzero[6] == 'g') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	memcpy = ft_memcpy(memcpy1, str, 2);
	printf("\nft_memcpy:            ");
	( memcpy[0] == 'A' && memcpy[1] == 'S' && memcpy[2] == 'r') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	move3 = ft_memmove(move_1 ,move4, 5);
	move5 = ft_memmove(move1, move2, 5);
	printf("\nft_memmove:           ");
	(move3[0] == 'F' && move3[2] == 'r' && move3[4] == 'a' && move5[0] == 'a' && move5[2] == 'l' && move5[3] == 'a' && move5[4] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	printf("\nft_memcmp:            ");
	(ft_memcmp(cmp1, cmp2, 3) == 0 && ft_memcmp(cmp1, cmp2, 5) == 0 && ft_memcmp(cmp1, cmp2, 7) == 9 && ft_memcmp(cmp2, cmp1, 7) == -9 && ft_memcmp(cmp1, cmp2, 7) == 9 && ft_memcmp(cmp2, cmp3, 8) == 105 && ft_memcmp(cmpint1, cmpint2, sizeof(int) * 3) == 0 && ft_memcmp(cmpint1, cmpint2, sizeof(int) * 4) == 7) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	str_chr = ft_strchr(cmp2, 'n');
	printf("\nft_strchr:            ");
	(str_chr[0] == 'n' && str_chr[2] == 'm' && str_chr[4] == 'c' && str_chr[6] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	str_r_chr = ft_strrchr(cmp2, 'e');
	printf("\nft_strrchr:           ");
	(str_r_chr[0] == 'e' && str_r_chr[2] == 'i' && str_r_chr[1] == 'c' && str_r_chr[3] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	printf("\nft_strncmp:           ");
	( ft_strncmp(strncmp1, strncmp2, 0) == 0) ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	printf("\nft_strnstr:           ");
	(b == NULL && a == NULL && emirhan[0] == 'B' && emirhan[4] == 'n' && emirhan[9] == '\0') ? printf("\033[0;92mSuccess!\033[0;96m") : printf("\033[0;91mFail!\033[0;96m");
	arr2 = ft_calloc(14, sizeof(char));
	arr3 = ft_calloc(5, sizeof(int));
	arr2 = arr;
	arr3 = "Musabilercili";
	printf("\nft_calloc:            ");
	( arr3[0] == 'M' && arr3[13] == '\0' && arr3[2] == 's' && arr3[6] == 'l' && arr3[10] == 'i' && arr2[0] == 2 && arr2[1] == 7 && arr2[3] == 6 ) ? printf("\033[0;92mSuccess!\033[0;96m\n") : printf("\033[0;91mFail!\033[0;96m\n");
	return (0);
}
