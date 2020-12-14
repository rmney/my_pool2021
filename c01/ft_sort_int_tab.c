
void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int rev;
	i = 1;
	while(i < size)
	{
		if(tab[i] < tab[i - 1])
		{
			rev = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = rev;
			i = 1;
		}
		else
			i++;
	}
}
		

