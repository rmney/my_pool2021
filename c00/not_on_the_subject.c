#include <unistd.h>

void p(char c)
{
	while(c >= 'a' && c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
			p(argv[1][0]);
	}
	write(1, "\n", 1);
	return(0);
}
