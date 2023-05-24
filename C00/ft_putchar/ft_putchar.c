/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meg <meg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:37:29 by meg               #+#    #+#             */
/*   Updated: 2023/05/21 17:42:32 by meg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

int	main(void)
{
	char	a;

	a = 'A';
	ft_putchar(a);
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
