

int ft_iterative_factorial(int nb)
{
	if(!nb)
		return(0);
	int i = 1;
	int j = 1;
	while(i <= nb)
	{
		j *= i;
		i++;
	}
	return(j);
}	
