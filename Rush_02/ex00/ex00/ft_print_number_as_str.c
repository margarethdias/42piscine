/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_as_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:46:59 by mdias             #+#    #+#             */
/*   Updated: 2023/06/11 22:34:36 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

int	ft_print_number_as_str(char *buffer, char *to_find)
{
	char	*line;
	char	content[1000];
	char	to_find_custom[1000];
	int		size;
	int		size_tofind;

	size_tofind = ft_strlen(to_find);
	ft_strlcpy(to_find_custom, to_find, size_tofind + 1);
	to_find_custom[size_tofind] = ':';
	to_find_custom[size_tofind + 1] = '\0';
	line = ft_strstr(buffer, to_find);
	while (!ft_is_alpha(*line))
		line++;
	size = ft_strlen_custom(line);
	ft_strlcpy(content, line, size + 1);
	write(1, content, size);
	if (content != to_find)
		return (-1);
	return (1);
}
