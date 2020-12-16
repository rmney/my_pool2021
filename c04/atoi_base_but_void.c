#include <stdio.h>
#include <unistd.h>

void	 print_hex(int nb)
{
        char *str;
        str = "0123456789abcdef";
        if(nb == 0)
                write(1, "0", 1);
        while(nb)
        {
              	write(1, &str[nb % 16], 1);
                nb /= 16;
        }
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

int	ft_atoi(char *str)
{
	int i;
	int num;
	int sign;

	i = 0;
	num = 0;
	sign = 1;
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\f' || str[i] == '\0')
		i++;
	if(str[i] == '+' || str[i] == '-')
		if(str[i++] == '-')
			sign = -1;
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return(sign * num);
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


void     ft_atoi_base(char *str, char *base)
{
	int i;
	i = ft_atoi(str);
       	if(ft_atoi(base) == 16)
		print_hex(i);
	if(ft_atoi(base) == 10)
		ft_putnbr(i);
	if(ft_atoi(base) == 8)
		ft_putnbr(print_num(i, 8));
	if(ft_atoi(base) == 2)
		ft_putnbr(print_num(i, 2));
}

int	main()
{
	ft_atoi_base("10", "2");
	return(0);
}
