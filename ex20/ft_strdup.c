#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char 	*ft_strdup(char *src)
{
	int	len;
	char	*cmp;
	int	i;

	i = 0;
	len = ft_strlen(src);
	cmp = (char*)malloc(sizeof(char) * (len + 1));
	while (i < len)
		cmp[i] = src[i++];
	return (cmp);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s\n", ft_strdup(argv[1]));
}
