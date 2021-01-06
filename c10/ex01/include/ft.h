#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <sys/errno.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <string.h>
#include <libgen.h>

void	ft_putstr(char *str);
void	ft_print_content(int fd);
void	ft_errors(char *pname, char *argv, int ft_is_directory);
#endif
