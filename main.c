#include "ft_printf.h"
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main(void)
{
	char			c = 'H';
	char			*str = "hello";
	int				d = 450;
	int				i = -2147483648;
	unsigned int	unb = 4294967295;
	unsigned int	hexa = 42995;
	int				HEXA = -346;
	char			*ptr = &c;

	printf("\t\tft_printf = %d\n", ft_printf("%d\n", d));
	printf("\t\tog_printf = %d\n", printf("%d\n", d));

	// printf("%d\n", ft_printf("my printf : char = %c - str = %s - decimal %d - integer %i - unsigned int %u - hexa %x - HEXA %X - pourcent %% - address %p\n", c, str, d, i, unb, hexa, HEXA, ptr)); 
	// printf("%d\n", printf("og printf : char = %c - str = %s - decimal %d - integer %i - unsigned int %u - hexa %x - HEXA %X - pourcent %% - address %p\n", c, str, d, i, unb, hexa, HEXA, ptr));
	// printf("\n");
	// printf("\t\tft_printf = %d\n", ft_printf("FT_PRINTF = H%kello%"));
	// printf("\t\tog_printf = %d\n", printf("OG_PRINTF = H%kello%"));
	// printf("\n");
	// printf("\t\tft_printf = %d\n", ft_printf("FT_PRINTF = Hello%"));
	// printf("\t\tog_printf = %d\n", printf("OG_PRINTF = Hello%"));
	// printf("\n");
	// printf("\t\tft_printf = %d\n", ft_printf("FT_PRINTF = H%kello"));
	// printf("\t\tog_printf = %d\n", printf("OG_PRINTF = H%kello"));
	// printf("\n");
	// printf("\t\tft_printf = %d\n", ft_printf("FT_PRINTF = H%%kello"));
	// printf("\t\tog_printf = %d\n", printf("OG_PRINTF = H%%kello"));
	// ft_printf(INT_MAX);
	// printf(INT_MAX);
	// printf("\n");
	// printf("\t\tft_printf = %d\n", ft_printf("%p", -1));
	// printf("\t\tog_printf = %d\n", printf("%p", -1));

	return (0);
}


// int main()
// {
//     char *str;
//     //int    i;
//     str = calloc(2147483647, sizeof(char));
//     memset(str, 'a', 2147483646);
//     //i = ft_printf("%s", str);
    
//    // printf("\n%d\n", ft_printf(str));
//     printf("%d\n", printf("%s\n", str));
//     free(str);
// }
