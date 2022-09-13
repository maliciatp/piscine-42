/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-trujil <m-trujil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:16:09 by m-trujil          #+#    #+#             */
/*   Updated: 2022/08/29 18:22:20 by m-trujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "HoLa JuaPa";

	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
