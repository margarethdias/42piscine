/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:34:09 by mdias             #+#    #+#             */
/*   Updated: 2023/06/07 18:37:48 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "Hello";
// 	char dest[5];
// 	printf("String de origem: %s\n", src);
// 	unsigned int length = ft_strlcpy(dest, src, 4);
// 	printf("String de destino: %s\n", dest);
// 	printf("Comprimento da string de origem: %u\n", length);
// 	return 0;
// }
