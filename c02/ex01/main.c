#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[8] = "gatopato";
	char	dest[8] = "";
	unsigned int n;

	n = 4;
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
