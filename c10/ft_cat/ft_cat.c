#include <unistd.h>
#include <sys/errno.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <string.h>
#include <libgen.h>

#define BUFF_SIZE 30000

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	int fd;
	char c;
	int y;
	int i;
	i = 1;
	y = i;
	int err = errno;
	while(i <= argc)
	{


		if(errno == 2) // checks if there a file or not
		{


			ft_putstr("cat : ");
			ft_putstr(argv[y]);
			ft_putstr(":");
			ft_putstr(" No such file or directory\n");
			close(fd);
			y++;

		}


			fd = open(argv[i], O_RDONLY);
			while(fd > -1 && read(fd, &c, 1) != 0)
				write(1, &c, 1);
			i++;



	}
	return(0);
}
