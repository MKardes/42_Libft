#include "libft.h"

int	main(void)
{
    const char    *str = "ASD";
    
    char    *str1;
    char    *lcpy;
    
    char    memset[] = "abcdefg";
    char    *memset_last;
    char    *bzero;
    char    memcpy1[] = "qwrq124";
    char    *memcpy;
    
    char    move1[] = "denemeler";
    char    move_1[] = "denemeler";
    char    move2[] = "anla";
    char    move4[] = "Ferrari";
    char    *move3;
    char    *move5;
    
    char    cmp1[] = "denemeler";
    char    cmp2[] = "denemeci";
    char    cmp3[] = "denemec";
    
    char    memchr[] = "ArkaSokaklar";
    char    *memchr1;
    
    size_t  lcpy_len;
    
    lcpy = (char *)malloc(4);
    str1 = ft_strdup(str);
    
    printf("\n\nft_isalpha:          ");
    (ft_isalpha('H') == 1 && ft_isalpha('j') == 1 && ft_isalpha('1') == 0) ? printf("Success!") : printf("Fail!");
    
    printf("\nft_isdigit:          ");
    (ft_isdigit('4') == 1 && ft_isdigit('.') == 0) ? printf("Success!") : printf("Fail!");
    
    printf("\nft_isalnum:          ");
    (ft_isalnum('A') == 1 && ft_isalnum('.') == 0 && ft_isalnum('1') == 1) ? printf("Success!") : printf("Fail!");
    
    printf("\nft_isascii:          ");
    (ft_isascii('A') == 1 && ft_isascii(128) == 0 && ft_isascii(-12) == 0) ? printf("Success!") : printf("Fail!");
    
    printf("\nft_isprint:          ");
    (ft_isprint(32) == 1 && ft_isprint(24) == 0 && ft_isprint(127) == 0) ? printf("Success!") : printf("Fail!");
    
    printf("\nft_strlen:           ");
    (ft_strlen("asaws") == 5 && ft_strlen("") == 0) ? printf("Success!") : printf("Fail!");
    
    printf("\nft_toupper:          ");
    (ft_toupper('a') == 'A' && ft_toupper('G') == 'G') ? printf("Success!") : printf("Fail!");
    
    printf("\nft_tolower:          ");
    (ft_tolower('a') == 'a' && ft_tolower('G') == 'g') ? printf("Success!") : printf("Fail!");
    
    printf("\nft_atoi:             ");
    (ft_atoi("  -123") == -123 && ft_atoi("\t\r+574") == 574 && ft_atoi("-+2214") == 0 && ft_atoi("asd1213") == 0) ? printf("Success!") : printf("Fail!");
    
    printf("\nft_strdup:           ");
    (str[0] == str1[0] && str[2] == str1[2]) ? printf("Success!") : printf("Fail!");
    
    lcpy_len = ft_strlcpy(lcpy, str, 3);
    printf("\nft_strlcpy:          ");
    (lcpy_len == 3 && lcpy[0] == str[0] && lcpy[1] == str[1] && lcpy[2] == '\0') ? printf("Success!") : printf("Fail!");
   
    memset_last = ft_memset(memset, 'x', 5);
    printf("\nft_memset:           ");
    (memset_last[0] == 'x' && memset_last[3] == 'x' && memset_last[4] == 'x' && memset_last[5] == 'f' && memset_last[6] == 'g') ? printf("Success!") : printf("Fail!");
    
    ft_bzero(memset, 5);
    bzero = memset;
    printf("\nft_bzero:            ");
    (bzero[0] == '\0' && bzero[3] == '\0' && bzero[4] == 0 && bzero[5] == 'f' && bzero[6] == 'g') ? printf("Success!") : printf("Fail!");
    
    memcpy = ft_memcpy(memcpy1, str, 2);
    printf("\nft_memcpy:           ");
    ( memcpy[0] == 'A' && memcpy[1] == 'S' && memcpy[2] == 'r') ? printf("Success!") : printf("Fail!");
    
    move3 = ft_memmove(move_1 ,move4, 5);
    move5 = ft_memmove(move1, move2, 5);
    printf("\nft_memmove:          ");
    (move3[0] == 'F' && move3[2] == 'r' && move3[4] == 'a' && move5[0] == 'a' && move5[2] == 'l' && move5[3] == 'a' && move5[4] == '\0') ? printf("Success!") : printf("Fail!");
    
    printf("\nft_memcmp:           ");
    (ft_memcmp(cmp1, cmp2, 3) == 0 && ft_memcmp(cmp1, cmp2, 5) == 0 && ft_memcmp(cmp1, cmp2, 7) == 9 && ft_memcmp(cmp2, cmp1, 7) == -9 && ft_memcmp(cmp1, cmp2, 7) == 9 && ft_memcmp(cmp2, cmp3, 8) == 105) ? printf("Success!") : printf("Fail!");
    
    memcpy(memchr1, ft_memchr(memchr, 'S', 4), 4);
    printf("\nft_memchr:           ");
    (memchr1[0] == 'S' && memchr1[2] == 'k' && memchr1[4] == '\0') ? printf("Success!") : printf("Fail!");
    
    printf("\n\n\nNORMINETTE\n\n");
    return (0);
}

/*
printf("\nft: ");
(ft_ == && ft_ == ) ? printf("Success!") : printf("Fail!");
 */
