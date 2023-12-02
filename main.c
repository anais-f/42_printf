#include "ft_printf.h"
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main(void)
{
	char			c = 'H';
	char			*str = "hello";
	int				d = 45;
	int				i = -2147483648;
	unsigned int	unb = 4294967295;
	unsigned int	hexa = 42995;
	int				HEXA = -346;
	char			*ptr = &c;

	printf("%d\n", ft_printf("my printf : char = %c - str = %s - decimal %d - integer %i - unsigned int %u - hexa %x - HEXA %X - pourcent %% - address %p\n", c, str, d, i, unb, hexa, HEXA, ptr)); 
	printf("%d\n", printf("og printf : char = %c - str = %s - decimal %d - integer %i - unsigned int %u - hexa %x - HEXA %X - pourcent %% - address %p\n", c, str, d, i, unb, hexa, HEXA, ptr));
	printf("\n");
	printf("\t\tft_printf = %d\n", ft_printf("FT_PRINTF = H%kello%"));
	printf("\t\tog_printf = %d\n", printf("OG_PRINTF = H%kello%"));
	printf("\n");
	printf("\t\tft_printf = %d\n", ft_printf("FT_PRINTF = Hello%"));
	printf("\t\tog_printf = %d\n", printf("OG_PRINTF = Hello%"));
	printf("\n");
	printf("\t\tft_printf = %d\n", ft_printf("FT_PRINTF = H%kello"));
	printf("\t\tog_printf = %d\n", printf("OG_PRINTF = H%kello"));
	printf("\n");
	printf("\t\tft_printf = %d\n", ft_printf("FT_PRINTF = H%%kello"));
	printf("\t\tog_printf = %d\n", printf("OG_PRINTF = H%%kello"));
	// printf("\n");
	// printf("\t\tft_printf = %d\n", ft_printf("%p", -1));
	// printf("\t\tog_printf = %d\n", printf("%p", -1));

	return (0);
}


// int main()
// {
//     char *str;
//     //int    i;
//     str = calloc(INT_MAX, sizeof(char));
//     memset(str, 'a', INT_MAX - 1);
//     //i = ft_printf("%s", str);
    
//    // printf("\n%d\n", ft_printf(str));
//     printf("%d\n", printf(str));
//     free(str);
// }
