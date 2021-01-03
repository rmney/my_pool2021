#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    print_hex(int nb)
{
    char c;

    if(nb >= 16)
    {
        print_hex(nb / 16);
        print_hex(nb % 16);
    }
    if(nb < 10)
    c = nb + 48;
    else if(nb < 16)
    c = nb + 87;
    write(1, &c, 1);
}
void    ft_apply(char c)
{
    int a = (int) c;
    ft_putchar('\\');
    c = c / c - 1;
    if(c < 1)
    ft_putchar(c + '0');
    print_hex(a);
}

void ft_putstr_non_printable(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {

        if(str[i] < 32 || str[i] == 127)
            ft_apply(str[i]);
        else
            write(1, &str[i], 1);
            i++;
    }
}


int    main()
{
     ft_putstr_non_printable("Coucou\ntu va\v\ts bien ?");
    return(0);
}
