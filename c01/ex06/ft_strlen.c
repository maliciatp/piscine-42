/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-trujil <m-trujil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:13:03 by m-trujil          #+#    #+#             */
/*   Updated: 2022/08/24 13:27:26 by m-trujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*int	ft_strlen(char *str)
{
	int len;
	len = 0;	
	while (*str != '\0')
	{
		++len;
		++str;
	}
	return (len);
}*/
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
