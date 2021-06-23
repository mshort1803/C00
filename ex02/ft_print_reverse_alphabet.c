#include <unistd.h>

void	ft_print_alphabet(void);

int 	main(void)
{
	ft_print_alphabet();
	return (0);
}

void 	ft_print_alphabet(void)
{
	char	*alphabet;

	alphabet = "zyxwvutsrqponmlkjihgfedcba";
	write(1, &*alphabet, 26);
}
