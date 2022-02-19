/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:09:51 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/18 02:46:01 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}


#include <unistd.h>

int    main(void)
{
    char *source;
    char destiny[100];
    char *result;
;
    source = "Essa frase precisa parar de aparecer aqui kaodijifuhs[asdoij";

    result = ft_strncpy(destiny, source, 42);
        write(1, result, 100);
}
