#include "../include/ft.h"

void	ft_print_content(int fd)
{
	char c;
	while(read(fd, &c, 1))
		write(1, &c, 1);
}
