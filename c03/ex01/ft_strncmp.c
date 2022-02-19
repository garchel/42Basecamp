/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:00:27 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/17 23:26:19 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		index;

	index = 0;
	if (n == 0)
		return (0);
	while (index < n)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		if (s1[index] == '\0' || s2[index] == '\0')
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char frase1[] = "bbcaDA";
	char frase2[] = "bbcaDA";
	
	printf("Função ORIGINAL");
	printf("\n%d\n", strncmp(frase1, frase2, 123));
	printf("Função CRIADA");
	printf("\n%d\n", ft_strncmp(frase1, frase2, 123));
}
*/