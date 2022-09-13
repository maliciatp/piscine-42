/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-trujil <m-trujil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:05:17 by m-trujil          #+#    #+#             */
/*   Updated: 2022/08/29 22:15:55 by m-trujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;

		if ((str[i] >= 'a' && str[i] <= 'z') && str[i] == str[0])
			str[i] = str[i] - 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
				&& (str[i - 1] < '0'
					|| (str[i - 1] > '9' && str[i - 1] < 'A')
					|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
					|| str[i - 1] > 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main()
{
	char str[] = "salut, coMment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
}
