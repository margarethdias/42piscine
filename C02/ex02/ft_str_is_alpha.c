/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:22:45 by mdias             #+#    #+#             */
/*   Updated: 2023/06/06 18:51:02 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
				i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*str = "";
// 	ft_str_is_alpha(str);
// 	printf("%d\n", ft_str_is_alpha(str));
// }