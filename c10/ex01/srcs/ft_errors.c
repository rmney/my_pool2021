#include "../include/ft.h"

void	ft_errors(char *pname, char *argv, int is_directory)
{
	ft_putstr(pname);
	ft_putstr(": ");
	ft_putstr(argv);
	ft_putstr(": ");
	if (is_directory)
		ft_putstr("Is a directory");
	else
		ft_putstr(strerror(errno));
	ft_putstr("\n");
}
