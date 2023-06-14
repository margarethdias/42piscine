/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:57:40 by mdias             #+#    #+#             */
/*   Updated: 2023/06/14 18:50:06 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that displays the alphabet, with even letters in uppercase, and
// odd letters in lowercase, followed by a newline.

#include <unistd.h>

int main(void)
{
	char a = 'a';
	char b = 'B';
	int i;

	i = 0;
	while ( a <= 'y' && b <= 'Z')
	{
		write (1, &a, 1);
		write (1, &b, 1);
		a = a + 2;
		b = b + 2;
		i++;
	}
}