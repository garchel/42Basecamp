/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:00:27 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/18 04:41:49 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index1;

	index1 = 0;
	while (s1[index1] || s2[index1])
	{
		if (s1[index1] != s2[index1])
			return (s1[index1] - s2[index1]);
		index1++;
	}
	return (0);
}


#include <stdio.h>
#include <string.h>

int main (void)
{
	char frase1[] = "abc";
	char frase2[] = "abe";
	
	printf("Função ORIGINAL");
	printf("\n%d\n", strcmp(frase1, frase2));
	printf("Função CRIADA");
	printf("\n%d\n", ft_strcmp(frase1, frase2));
}
