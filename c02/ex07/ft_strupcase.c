/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:17:42 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/16 13:45:53 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
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
			if ((str[i] >= 'a') && (str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
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
    char    string[] = "abcdefghij#$&¨@51651sdfwe\0";

    printf("%s\n", ft_strupcase(string));
}
*/