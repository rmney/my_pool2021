#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int nb)
{
	char *str;
	str = "0123456789abcdef";
	if(nb == 0)
		write(1, "0", 1);
	while(nb)
	{
		write(1, &str[nb % 16], 1);
		nb /= 16;
	}
}
void	ft_apply(char c)
{
	int a = (int) c;	
	ft_putchar('\\');
	c = c / 16;
	if(c < 10)
	ft_putchar(c + '0');
	print_hex(a);
}

void ft_putstr_non_printable(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if(str[i] <= 31 || str[i] == 127)
			ft_apply(str[i]);
		else
			write(1, &str[i], 1);
			i++;
	}
}
int	main()
{
	ft_putstr_non_printable("Coucou\ntu va\f\ts bien ?");
	return(0);
}
