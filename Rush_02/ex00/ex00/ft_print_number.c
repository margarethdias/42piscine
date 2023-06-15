/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 22:54:32 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/11 20:52:55 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

void	ft_print_number(char *buffer, char *nbr)
{
	if (nbr[0] == '0')
		return ;
	if (ft_strlen(nbr) == 1)
		unit(buffer, nbr);
	else if (ft_strlen(nbr) == 2)
		ten(buffer, nbr);
	else if (ft_strlen(nbr) == 3)
		hundred(buffer, nbr);
	else if (ft_strlen(nbr) >= 4 && ft_strlen(nbr) <= 6)
		thousand(buffer, nbr, ft_strlen(nbr));
	else if (ft_strlen(nbr) >= 7 && ft_strlen(nbr) <= 9)
		million(buffer, nbr, ft_strlen(nbr));
	else if (ft_strlen(nbr) == 10)
		billion(buffer, nbr);
}
