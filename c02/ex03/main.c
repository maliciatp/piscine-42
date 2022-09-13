/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-trujil <m-trujil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:49:00 by m-trujil          #+#    #+#             */
/*   Updated: 2022/08/29 17:08:00 by m-trujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "89";

	printf("%d\n", ft_str_is_numeric(str));
	return (0);
}
