#include <unistd.h>

void	rev_print(char *argv)
{
	int i;
	i = 0;
	while(argv[i])
		i++;
		while(i)
			write(1, &argv[--i], 1);
}

int	main(int argc, char **argv)
{
	int i;
	i = 1;
	while(i < argc)
	{
		rev_print(argv[i]);
			write(1, "\n", 1);
			i++;
	}
	return(0);
}
