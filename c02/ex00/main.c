#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[11] = "pepitoperez";
	char	dest[20] = "";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
