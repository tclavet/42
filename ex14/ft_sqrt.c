#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return(0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return(i);
	else
		return(0);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(565));
	printf("%d\n", ft_sqrt(-432));
	printf("%d\n", ft_sqrt(-16));
}
