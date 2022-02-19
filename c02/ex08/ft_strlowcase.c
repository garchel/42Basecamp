/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:17:42 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/16 13:48:47 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (str);
	}
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
			{
				str[i] = str[i] + 32;
			}
			i++;
		}
	}
	return (str);
}

/*
#include <stdio.h>

int    main()
{
    char    string[] = "ABCDEj#$&¨@51651sdfwe\0";

    printf("%s\n", ft_strlowcase(string));
}
*/