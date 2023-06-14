/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:08:39 by mdias             #+#    #+#             */
/*   Updated: 2023/06/12 12:31:39 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alpha_nbr(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !ft_alpha_nbr(str[i]))
			i++;
		if (str[i] && ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] = ((str[i] - 'a') + 'A');
		i++;
		while (str[i] && ft_alpha_nbr(str[i]))
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] = ((str[i] - 'A') + 'a');
			i++;
		}
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "42mots {quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}
