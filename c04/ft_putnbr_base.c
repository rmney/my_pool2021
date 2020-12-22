#include <unistd.h>
#include <stdio.h>


int     ft_check_all(char *base)
{
        int i;
        char *str;
        char *str2;
        int len;
          
        i = 0;
        str = "0123456789abcdef";
        str2 = "poneyvif";
        len = 0;
          while(base[len])
              len++;
          if(!(len == 2 || len == 8 || len == 10 || len == 16))
                  return(0);
        while(base[i])
        {
                if(base[i] == str[i] || base[i] == str2[i])
                i++;
        else
                return(0);

        }

        return(len);
}


int print_num(int decimalnum, int base)
{
    int octalnum = 0, temp = 1;

    while (decimalnum != 0)
    {
        octalnum = octalnum + (decimalnum % base) * temp;
        decimalnum = decimalnum / base;
        temp = temp * 10;
    }

    return octalnum;
}

void    ft_putnbr(int nb)
{
        char c;
        if(nb < 0)
        {
                nb = -nb;
                write(1, "-", 1);
        }
        if(nb < 10)
        {
                c = nb + '0';
                write(1, &c, 1);
        }
        else
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
}

void	print_hex(int nb)
{
	char	*str;
	str = "0123456789abcdef";
	if(nb == 0)
		write(1, "0", 1);
	while(nb)
	{
		write(1, &str[nb % 16], 1);
		nb /= 16;
	}
}
			
void	ft_putnbr_base(int nbr, char *base)
{
	if(ft_check_all(base) == 8)
		ft_putnbr(print_num(nbr, 8));
	if(ft_check_all(base) == 10)
		ft_putnbr(nbr);
	if(ft_check_all(base) == 2)
	   	ft_putnbr(print_num(nbr, 2));
	if(ft_check_all(base) == 16)
		print_hex(nbr);
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
