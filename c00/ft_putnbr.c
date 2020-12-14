
void	ft_putnbr(int nb)
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
