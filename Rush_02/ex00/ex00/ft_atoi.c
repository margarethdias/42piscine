/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 22:31:39 by mdias             #+#    #+#             */
/*   Updated: 2023/06/12 09:45:36 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *ugly, char *clean)
{
	int	u;
	int	c;
	int	filtered_numbr;

	u = 0;
	c = 0;
	filtered_numbr = 0;

int	may_go_to_atoi(char *ugly)
{
	while (ugly != '\0')
	{
		if (*ugly < '0') || (*ugly > '9') && *ugly != '-' || '+')
			return (0);
		ugly++;
	}
	return (1);
}
	while (ugly[u] >= '0' && ugly[u] <= '9')
	{
		if (c == 10)
			return (-1);
		clean[c] = ugly[u];
		filtered_numbr = (ugly[u] - '0') + (filtered_numbr * 10);
		u++;
		c++;
	}
	clean[c] = '\0';
	return (filtered_numbr);
}
char *string = "++---+243550";
int inteiro = 243550;