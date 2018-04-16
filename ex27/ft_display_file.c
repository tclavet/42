#include "lib.h"

void	ft_puterr(char c)
{
	write(2, &c, 1);
}

int		ft_putstrerr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_puterr(str[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int	fd;
	char	*buf;

	if (argc == 1)
		return (ft_putstrerr("File name missing.\n"));
	if (argc > 2)
		return (ft_putstrerr("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
	return (0);
}
