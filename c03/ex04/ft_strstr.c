/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:19:41 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/18 02:07:33 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_imax(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

int	validate(char *str, int istr, char *to_find)
{
	int	i;

	i = 0;
	while (str[istr] == to_find[i] && to_find[i] != '\0' && str[istr] != '\0')
	{
		if (str[istr] == to_find[find_imax(to_find) - 1])
			return (1);
		istr++;
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	istr;

	istr = 0;
	while (str[istr] != '\0')
	{
		if (to_find[0] == '\0')
			return (str);
		if (str[istr] == to_find[0])
			if (validate(str, istr, to_find) == 1)
				return (&str[istr]);
		istr++;
	}
	return ('\0');
}


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *str;
	char *to_find;
	char *buff;
	char *ft_buff;

	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galera");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(1, sizeof(char)), "");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	return (0);
}
