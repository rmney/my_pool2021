#include <unistd.h>
#include <stdio.h>
#include "./ft_putnbr_assist.c"

int	ft_check_all(char *base)
{
	int i;
	char *str;
	int len = ft_strlen(base);

	i = 0;
	str = "0123456789abcdef";
	while(base[i] && i < len)
	{
		if(base[i] == str[i])
		i++;
	else
		return(0);
		
	}

	return(1);
}

int     ft_check_octal(char *base)
{
        char *strp;
        int i;
        i = 0;
        strp = "poneyvif";
                while(base[i])
                {
                        if(base[i] == strp[i])
                                i++;
                        else
                                return(0);
                }

        return(1);
}


void	ft_putnbr_base(int nbr, char *base)
{

		if(ft_strlen(base) == 16 && ft_check_all(base))
			print_hex(nbr);
		if(ft_strlen(base) == 8 && ft_check_octal(base))
				ft_putnbr(print_num(nbr, 8));
		if(ft_strlen(base) == 10 && ft_check_all(base))
				ft_putnbr(print_num(nbr, 10));
	        if(ft_strlen(base) == 2 && ft_check_all(base))
	                ft_putnbr(print_num(nbr, 2));

}

int	main()
{
	ft_putnbr_base(11, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-8, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(9, "01");
	write(1, "\n", 1);
	ft_putnbr_base(111,  "0123456789");
	return(0);
}



		





