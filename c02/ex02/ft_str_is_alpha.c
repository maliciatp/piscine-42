/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-trujil <m-trujil@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:08:34 by m-trujil          #+#    #+#             */
/*   Updated: 2022/08/29 17:20:11 by m-trujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
			return(1);

		else
			return (0);

		if(str[i] >= 65 && str[i] <= 90)
			return (1);

		else
			return (0);
	i++;
	}
	return (1);
}
