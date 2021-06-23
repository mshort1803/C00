#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(1);
}

void	ft_is_nagative(int n)
{
	char	number_is;

	if (n < 0)
	{
		number_is = 'N';
	}
	else
	{
		number_is = 'P';
	}
	write(1, &number_is, 1);
}
