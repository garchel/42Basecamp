/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:04:22 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/17 20:12:46 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_numchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i_dest;
	int	i;
	int	imax;

	i = 0;
	i_dest = find_numchar(dest);
	imax = i_dest + find_numchar(src);
	while (i_dest != imax)
	{
		dest[i_dest] = src[i];
		i_dest++;
		i++;
	}
	dest[i_dest] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main (void)
{
	char str1[6] = "ABCD";
	char str2[] = "abce";
	char str3[6] = "ABCD";
	char str4[] = "abce";
	char *retorno;
	char *retorno2;

	retorno = strcat(str1, str2);
	printf("Função ORIGINAL\n");
	printf("Retorno = %s \n", retorno);
	
	retorno2 = ft_strcat(str3, str4);
	printf("Função CRIADA\n");
	printf("Retorno = %s \n", retorno2);
}
*/