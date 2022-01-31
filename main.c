#include "libft.h"

int	main(void)
{
    printf("ft_isalpha:          ");
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
    return (0);
    }
