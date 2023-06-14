/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:59:19 by mdias             #+#    #+#             */
/*   Updated: 2023/06/14 19:37:33 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

#include <unistd.h>

int	repeat_alpha(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
	{
		repeat = c - 'A' + 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		repeat = c - 'a' + 1;
	}
	else
		repeat = 1;
	return (repeat);
}

int	main(int argc, char **argv)
{
	int	i;
	int	repeat;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			repeat = repeat_alpha(argv[1][i]);
			while (repeat > 0 && repeat--)
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
