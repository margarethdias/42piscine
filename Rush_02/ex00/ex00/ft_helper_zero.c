/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:22:06 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/12 11:10:24 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

char	*ft_filter_zero(char *nbr, int len)
{
	char	*arr;
	int		count;
	int		curr;

	count = 0;
	curr = 0;
	arr = malloc(len + 1);
	while (nbr[count] != '\0')
	{
		while (nbr[count] != '0')
			count++;
		arr[curr] = nbr [count];
		curr++;
		count++;
	}
	arr[curr] = '\0';
	return (arr);
}

void	ft_handle_zero(char *buffer, char *nbr, int len)
{
	char	*clean_str;

	clean_str = ft_filter_zero(nbr, len);
	ft_print_number(buffer, clean_str);
}
