#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char str[] = "gato";
	int n = ft_strlen(str);

	printf("%d\n", n);
	return (0);
}
