/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_helpers2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 22:59:53 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/11 15:28:37 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

void	million(char *buffer, char *nbr, int len)
{
	if (len == 7 && nbr[0] != '0')
	{
		unit(buffer, nbr);
		ft_print_number_as_str(buffer, "1000000");
		write(1, " ", 1);
	}	
	else if (len == 8 && nbr[0] != '0')
	{
		ten(buffer, return_data(nbr, 2));
		ft_print_number_as_str(buffer, "1000000");
		write(1, " ", 1);
	}
	else if (len == 9 && nbr[0] != '0')
	{
		hundred(buffer, return_data(nbr, 3));
		ft_print_number_as_str(buffer, "1000000");
		write(1, " ", 1);
	}
	if (len == 8)
		nbr++;
	if (len == 9)
		nbr += 2;
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
