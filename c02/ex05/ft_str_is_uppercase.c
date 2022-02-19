/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:17:42 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/16 13:49:47 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
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
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
			{
				status = 0;
			}
			i++;
		}
	}
	return (status);
}

/*
#include <stdio.h>

int main (void)
{
	char *pont;
	int resultado;
	char r;
	
	pont = "aaaa";
	resultado = ft_str_is_uppercase(pont);
	r = resultado + 48;
	printf("Resultado desejado: 0. Resultado obtido: %c\n", r);
	
	pont = "AAAbbb";
	resultado = ft_str_is_uppercase(pont);
	r = resultado + 48;
	printf("Resultado desejado: 0. Resultado obtido: %c\n", r);
	
	pont = "AAABBB";
	resultado = ft_str_is_uppercase(pont);
	r = resultado + 48;
	printf("Resultado desejado: 1. Resultado obtido: %c\n", r);
}
*/