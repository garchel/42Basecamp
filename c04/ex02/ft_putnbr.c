/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:34:12 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/18 16:31:43 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_nbrlen(int nb)
{
	int	size;
	int	num;

	size = 0;
	num = nb;
	while (num != 0)
	{
		num = num / 10;
		size += 1;
	}
	return (size);
}

void	convert_to_char(int nbr, int size)
{
	int		divisor;
	int		arraysize;
	char	arraynbr[20];
	int		sign;

	sign = 1;
	if (nbr < 0)
		sign = -1;
	divisor = 10;
	arraysize = size;
	while (size > 0)
	{	
		arraynbr[size -1] = (nbr % divisor) * sign + 48;
		size--;
		nbr = nbr / divisor;
	}
	write (1, arraynbr, arraysize);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	convert_to_char(nb, ft_nbrlen(nb));
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//int str1 = 12344;
	//char valorstr1[50];
	int str2 = 12344;
	
	
	//printf("Função ORIGINAL\n");
	//itoa(str1, valorstr1, 10);
	//printf("\n");
	
	printf("Função CRIADA\n");
	ft_putnbr(str2);
	printf("\n");
}
*/