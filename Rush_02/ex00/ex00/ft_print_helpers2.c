/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_helpers2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 22:59:53 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/11 19:47:17 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

void	million(char *buffer, char *nbr, int len)
{
	char	arr[10];

	if (nbr[0] == '0')
		ft_handle_zero(buffer, nbr, len);
	if (len == 7)
	{
		unit(buffer, nbr);
		ft_print_number_as_str(buffer, "1000000");
		write(1, " ", 1);
	}
	else if (len == 8)
	{
		return_data(arr, nbr, 2);
		ten(buffer, arr);
		ft_print_number_as_str(buffer, "1000000");
		write(1, " ", 1);
		nbr++;
	}
	else if (len == 9)
	{
		return_data(arr, nbr, 3);
		hundred(buffer, arr);
		ft_print_number_as_str(buffer, "1000000");
		write(1, " ", 1);
		nbr += 2;
	}
	++nbr;
	thousand(buffer, nbr, ft_strlen(nbr));
}

void	billion(char *buffer, char *nbr)
{
	if (nbr[0] != 0)
	{
		unit(buffer, nbr);
		ft_print_number_as_str(buffer, "1000000000");
		write(1, " ", 1);
		++nbr;
		million(buffer, nbr, ft_strlen(nbr));
	}
}
