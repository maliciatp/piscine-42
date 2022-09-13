/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-trujil <m-trujil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:58:43 by m-trujil          #+#    #+#             */
/*   Updated: 2022/08/24 18:09:50 by m-trujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int aux;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 -i] = aux;
		i++;
	}
}
