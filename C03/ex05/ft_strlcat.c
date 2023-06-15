/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:43:53 by mdias             #+#    #+#             */
/*   Updated: 2023/06/13 21:45:50 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (size < dest_len)
		return (src_len + size);
	else
		return (src_len + dest_len);
}

#include <stdio.h>
#include <bsd/string.h>
int main()
{
    char dest[20] = "Hello";
    char src[10] = " World";
	char dest2[20] = "Hello";
    char src2[10] = " World";
    unsigned int size = 20;
	printf("String original: %s\n", dest);
    printf("String a ser concatenada: %s\n", src);
    unsigned int result = ft_strlcat(dest, src, size);
    printf("String resultante: %s\n", dest);
    printf("Comprimento total: %u\n", result);
	unsigned int result2 = strlcat(dest2, src2, size);
	printf("Comprimento total: %u\n", result2);
	return 0;
}
