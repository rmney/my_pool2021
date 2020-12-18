#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return(s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	char *tmp;
	int i;
	int find;
	find = 1;
	while(find)
	{
		find = 0;
		i = 0;
		while(++i < argc - 1)
		{
			if(ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				find = 1;
			}
			
			
		}
	}
	i = 0;
	while(++i < argc)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
		return(0);
}
