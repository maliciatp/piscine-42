#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int n = 5;
	int tab[5] = {1, 2, 3, 4, 5};
	int i;

	ft_rev_int_tab(tab,n);

	i = 0;
	while (i < n)
	{
		printf("%d ", tab[i]);
		i++;
	}

	return (0);
}
