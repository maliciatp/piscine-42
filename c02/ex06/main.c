/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-trujil <m-trujil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:55:14 by m-trujil          #+#    #+#             */
/*   Updated: 2022/08/29 18:06:05 by m-trujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char	str[] = " 	";

	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
