/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:41:42 by mdias             #+#    #+#             */
/*   Updated: 2023/06/14 20:07:03 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that takes a string and displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.

// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

// The output will be followed by a newline.

// If the number of arguments is not 1, the program displays a newline.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	repeat_13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		c = c + 13;
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		c = c - 13;
	return (c);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ft_putchar(repeat_13(argv[1][i]));
			i++;
		}
	}
	write(1, "\n", 1);
}
