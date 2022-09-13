/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-trujil <m-trujil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:44:29 by m-trujil          #+#    #+#             */
/*   Updated: 2022/08/29 17:46:27 by m-trujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str[] = "UUA";

	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}
