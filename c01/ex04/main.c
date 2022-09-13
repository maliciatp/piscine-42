#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;
	x = 4;	
	y = 2;

	ft_ultimate_div_mod(&x,&y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}
