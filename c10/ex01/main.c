#include "./include/ft.h"

int	main(int argc, char **argv)
{
	int fd;
	char c;
	int i;

	i = 1;
	while(i < argc)
	{
                if(argv[i][0] == '-' && argv[i][1] == '\0')
		{
			while(read(0, &c, 1))
				write(1, &c, 1);
		}
		else if((fd = open(argv[i], O_DIRECTORY)) == -1)
		{	
			if(errno == 2)
			ft_errors(argv[0], argv[i], 0);
			else
			{
				fd = open(argv[i], O_RDONLY);
                        while(fd > -1 && read(fd, &c, 1) != 0)
                                write(1, &c, 1);
			}
		}
		else
			ft_errors(argv[0], argv[i], 1);
	i++;			
	}

	if(argc == 1)
	{
		while(read(0, &c, 1))
			write(1, &c, 1);
	}
	return(0);
}
