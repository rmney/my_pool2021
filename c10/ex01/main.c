#include "./include/ft.h"

void	ft_err_none(char *str, int i)
{
	ft_putstr("cat : ");
        ft_putstr(str);
       	ft_putstr(":");
        ft_putstr(" No such file or directory\n");
	i++;
}

int	main(int argc, char **argv)
{
	int fd;
	char c;
	int i;

	i = 1;
	while(i <= argc)
	{
                fd = open(argv[i], O_RDONLY);
                while(fd > -1 && read(fd, &c, 1) != 0)
                        write(1, &c, 1); 
                if(errno == ENOENT)
		{
       		  	ft_putstr("cat : ");
			ft_putstr(argv[i]);
       		 	ft_putstr(":");
       		 	ft_putstr(" No such file or directory\n");
			close(fd);
		}
		i++;
	}
	return(0);
}
