/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:56:46 by mdias             #+#    #+#             */
/*   Updated: 2023/06/09 18:56:49 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *str = "Hello";
// 	int length = ft_strlen(str);
// 	printf("Tamanho da string '%s': %d\n", str, length);
// 	return 0;
// }
