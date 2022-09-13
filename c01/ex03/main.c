#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int *x;
	int *y;
	int	a;
	int	b;
	x = &a;
	y = &b;
	ft_div_mod(4,2,x,y);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
