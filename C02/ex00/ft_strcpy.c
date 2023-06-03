/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:52:44 by mdias             #+#    #+#             */
/*   Updated: 2023/06/02 21:34:33 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	// char	*reader;

	// int c;
	// c = 0;
	// while (src[c] != '\0')
	// {
	// 	dest[c] = src[c];
	// 	c++;
	// }
	// reader = *src;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	// dest[c] = '\0';
	return (dest);
}

int	main(void)
{
	char str[27];
	char *str2 = "Hello World";

	ft_strcpy(str, str2);
}