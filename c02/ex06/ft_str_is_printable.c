/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:17:42 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/13 14:43:39 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	status;

	i = 0;
	status = 1;
	if (str[i] == '\0')
	{
		return (status);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 32 && str[i] <= 126))
			{
				status = 0;
			}
			i++;
		}
	}
	return (status);
}
