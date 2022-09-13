/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-trujil <m-trujil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:20:25 by m-trujil          #+#    #+#             */
/*   Updated: 2022/08/18 20:54:29 by m-trujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	x[4];

	x[0] = 0;
	while (x[0] <= 98)
	{
		x[1] = x[0] + 1;
		while (x[1] <= 99)
		{
			x[2] = (x[0] / 10) + '0';
			write(1, &x[2], 1);
			x[2] = (x[0] % 10) + '0';
			write(1, &x[2], 1);
			write(1, " ", 1);
			x[3] = (x[1] / 10) + '0';
			write(1, &x[3], 1);
			x[3] = (x[1] % 10) + '0';
			write(1, &x[3], 1);
			if (x[0] != 98)
				write(1, ", ", 2);
			x[1]++;
		}
		x[0]++;
	}
}
