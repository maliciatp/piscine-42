#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int x;
	int y;
	x = 42;
	y = 22;

	ft_swap(&x,&y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}
