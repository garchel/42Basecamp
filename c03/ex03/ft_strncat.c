/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:03:22 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/17 20:10:19 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_max_index(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb )
{
	unsigned int	imax_dest;
	unsigned int	i;

	i = 0;
	imax_dest = find_max_index(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[imax_dest] = src[i];
		imax_dest++;
		i++;
	}
	dest[imax_dest] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main (void)
{
	char str1[5] = "ABCD";
	char str2[] = "abce";
	char str3[5] = "ABCD";
	char str4[] = "abce";
	char *retorno;
	char *retorno2;

	retorno = ft_strncat(str1, str2, 4);
	printf("Retorno = %s \n", retorno);

	retorno2 = strncat(str3, str4, 4);
	printf("Retorno2 = %s \n", retorno2);
	return 0;
}
*/