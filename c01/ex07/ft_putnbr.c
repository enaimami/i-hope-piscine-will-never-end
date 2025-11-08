#include <unistd.h>

void	ft_getchar(char n)
{
	write (1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if(nb >= 10)
	{
		ft_putnbr (nb / 10);
	}
	else if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if(nb < 0)
	{
		ft_getchar('-');
		nb = -nb;
		ft_putnbr(nb);
		return ;
	}
	ft_getchar(nb % 10 + '0');
}

int	main(void)
{
	ft_putnbr(42);
	return 0;
}
