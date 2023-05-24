/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meg <meg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:24:53 by meg               #+#    #+#             */
/*   Updated: 2023/05/21 20:41:40 by meg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	int	n;

	n = 0;
	ft_is_negative(n);
	return (0);
}

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (n < 0)
	{
		write (1, &negative, 1);
		n++;
	}
	else
	{
		write (1, &positive, 1);
	}
}
