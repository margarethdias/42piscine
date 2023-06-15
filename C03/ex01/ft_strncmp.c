/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:12:47 by mdias             #+#    #+#             */
/*   Updated: 2023/06/12 11:22:30 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0') && (i < n - 1))
	{
			i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
#include <string.h>
#include <stdio.h>
int	main(void)
{
char 	s1[] = "Nátali";
char	s2[] = "Natali";
printf("%d\n", ft_strncmp(s1, s2, 4));
printf("%d\n", strncmp(s1, s2, 4));
}
