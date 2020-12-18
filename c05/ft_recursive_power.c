#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if(power < 0)
		return(0);
	 if(power < 1)
		return(1);
	else	
	return nb * ft_recursive_power(nb, power - 1);
}

int	main()
{
	printf("%d", ft_recursive_power(3, 2));
	return(0);
}
