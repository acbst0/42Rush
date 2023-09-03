void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	h;
	int	v;

	h = 1;
	while (h <= y)
	{
		v = 1;
		while (v <= x)
		{
			if ((h == 1 && v == 1) 
				|| (h == y && v == x && v != 1 && h != 1))
				ft_putchar('A');
			else if ((h == 1 && v == x && v != 1) 
				|| (h == y && v == 1 && h != 1))
				ft_putchar('C');
			else if (((h == 1 || h == y) && v != 1 && v != x) 
				|| ((h != 1 || h != y) && (v == 1 || v == x)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			v++;
		}
		ft_putchar('\n');
		h++;
	}
}
