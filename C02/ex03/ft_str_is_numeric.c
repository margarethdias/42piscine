/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:07:47 by mdias             #+#    #+#             */
/*   Updated: 2023/06/06 18:52:31 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
// 	char	*str = "5";
// 	ft_str_is_numeric(str);
// 	printf("%d\n", ft_str_is_numeric(str));
// }