#include <unistd.h>
void	ft_print_alphabet(char c)
{
	
	while(c <= 'z' && c >= 'a')
	{
		write(1, &c, 1);
		c++;
	}
}

int	main()
{
	ft_print_alphabet('f');
	return(0);
}
