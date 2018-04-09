#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if ((nb < 0) || (nb > 12))
		return(0);
	while(i <= nb)
	{
		result = i * result;
		i++;
	}
	return(result);
}
