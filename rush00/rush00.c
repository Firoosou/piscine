#include <unistd.h>

void	ft_putchar(char c);
void	largeur(int x, char d, char m);
void	rush(int x, int y);

void	largeur(int x, char d, char m)
{
	int	i ;

i = 1;
	while (i <= x)
	{
		if (i < x)
		{
			if (i == 1)
			{
				ft_putchar(d);
			}
			else
				ft_putchar(m);
		}
		if (i == x)
		{
			ft_putchar(d);
		}	
		i++;
	}
}

void	rush(int x, int y)
{
	int	i ;

i = 1;
	while (i <= y)
	{
		if (i < y)
		{
			if (i == 1)
			{
				largeur (x, 'o', '-');
			}
			else
				largeur(x, '|', ' ');
		}
		if (i == y)
		{
			largeur(x, 'o', '-');
		}
		write(1, "\n", 1);
		i++;
	}
}
