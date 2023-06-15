/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 22:59:59 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/11 16:05:51 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

char	*return_data(char *nbr, int len)
{
	char	*arr;
	int		count;

	count = 0;
	arr = malloc(len + 1);
	while (count < len)
	{
		arr[count] = nbr[count];
		count++;
	}
	arr[count] = '\0';
	return (arr);
}

void	unit(char *buffer, char *nbr)
{
	char	digit[2];

	digit[0] = nbr[0];
	digit[1] = '\0';
	ft_print_number_as_str(buffer, digit);
	write(1, " ", 1);
}

void	ten(char *buffer, char *nbr)
{
	char	custom[3];

	custom[2] = '\0';
	if (nbr[0] == '1')
	{
		ft_print_number_as_str(buffer, nbr);
		write(1, " ", 1);
	}
	else
	{
		custom[0] = nbr[0];
		if (nbr[1] != '0')
			custom[1] = nbr[1];
		else
			custom[1] = '0';
		if (custom[1] == '0')
		{
			ft_print_number_as_str(buffer, custom);
			return ;
		}
		if (custom[1] != '0')
		{
			custom[1] = '0';
			ft_print_number_as_str(buffer, custom);
			write(1, " ", 1);
			nbr++;
			unit(buffer, nbr);
		}
	}
}

void	hundred(char *buffer, char *nbr)
{
	if (nbr[0] != '0')
	{
		unit(buffer, nbr);
		ft_print_number_as_str(buffer, "100");
		write(1, " ", 1);
	}
	if (nbr[1] == '0' && nbr[2] != '0')
	{
		nbr += 2;
		unit(buffer, nbr);
	}
	else if (nbr[1] != '0')
		ten(buffer, ++nbr);
}

void	thousand(char *buffer, char *nbr, int len)
{
	if (len == 4 && nbr[0] != '0')
	{
		unit(buffer, nbr);
		ft_print_number_as_str(buffer, "1000");
		write(1, " ", 1);
	}
	else if (len == 5 && nbr[0] != '0')
	{
		ten(buffer, return_data(nbr, 2));
		ft_print_number_as_str(buffer, "1000");
		write(1, " ", 1);
	}
	else if (len == 6 && nbr[0] != '0')
	{
		hundred(buffer, return_data(nbr, 3));
		ft_print_number_as_str(buffer, "1000");
		write(1, " ", 1);
	}
	if (len == 5)
		nbr++;
	if (len == 6)
		nbr += 2;
	hundred(buffer, ++nbr);
}
