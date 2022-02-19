/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:52:23 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/18 22:23:28 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str1[20] = " --+---+1234ab567";
	char str2[20] = " --+---+1234ab567";
	
	int retorno;
	int retorno2;

	retorno = atoi(str1);
	printf("Função ORIGINAL\n");
	printf("Retorno = %d \n", retorno);
	
	retorno2 = ft_atoi(str2);
	printf("Função CRIADA\n");
	printf("Retorno = %d \n", retorno2);

}