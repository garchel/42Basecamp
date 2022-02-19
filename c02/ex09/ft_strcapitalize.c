/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:15:46 by pauvicto          #+#    #+#             */
/*   Updated: 2022/02/17 16:42:11 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	is_lowerdigit(char *str, int index)
{
	int	status;

	status = 0;
	if ((str[index] >= 'a' && str[index] <= 'z'))
	{
		status = 1;
	}
	return (status);
}

int	is_upperdigit(char *str, int index)
{
	int	status;

	status = 0;
	if ((str[index] >= 'A' && str[index] <= 'Z'))
	{
		status = 1;
	}
	return (status);
}

int	is_alphanum(char *str, int index)
{
	int	status;

	status = 0;
	if ((str[index] >= 'a' && str[index] <= 'z'))
	{
		status = 1;
	}
	if ((str[index] >= 'A' && str[index] <= 'Z'))
	{
		status = 1;
	}
	if ((str[index] >= '0' && str[index] <= '9'))
	{
		status = 1;
	}
	return (status);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_word;

	i = 0;
	is_word = FALSE;
	while (str[i])
	{  
		if (is_alphanum(str, i) == 1)
		{
			if (is_word == FALSE)
			{
				if (is_lowerdigit(str, i) == 1)
					str[i] = str[i] - 32;
				is_word = TRUE;
			}
			else
				if (is_upperdigit(str, i) == 1)
					str[i] = str[i] + 32;
		}
		else
			is_word = FALSE;
		i++;
	}
	return (str);
}
