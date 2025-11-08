#include <unistd.h>

void	ft_getchar(char h)
{
	write(1, &h, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_getchar(a / 10 + '0');
			ft_getchar(a % 10 + '0');
			ft_getchar(' ');
			ft_getchar(b / 10 + '0');
			ft_getchar(b % 10 + '0');
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
