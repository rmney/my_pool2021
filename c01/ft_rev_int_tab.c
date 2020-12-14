
void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int rev;
	i = 0;
	size--;
	while(i < size)
	{
		rev = tab[i];
		tab[i] = tab[size];
		tab[size] = rev;
		i++;
		size--;
	}
}
