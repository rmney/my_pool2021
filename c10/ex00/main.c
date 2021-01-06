#include "includes/ft.h"

int	main(int argc, char **argv)
{
	int fd;
	char c;

	if(argc == 1)
		ft_putstr("File name missing.\n");
	if(argc > 2)
		ft_putstr("Too many arguments.\n");

	if(argc == 2)
	{
	                fd = open(argv[1], O_RDONLY);
                while(fd > -1 && (read(fd, &c, 1)) != 0)
                        write(1, &c, 1);
	}
		
	return(0);
}
