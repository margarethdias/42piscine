/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_as_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:46:59 by mdias             #+#    #+#             */
/*   Updated: 2023/06/11 18:57:51 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

void	ft_print_number_as_str(char *buffer, char *to_find)
{
	char	*line;
	char	*content;
	char	*to_find_custom;
	int		size;
	int		size_tofind;

	size_tofind = ft_strlen(to_find);
	to_find_custom = malloc(size_tofind + 2);
	ft_strlcpy(to_find_custom, to_find, size_tofind + 2);
	to_find_custom[size_tofind] = ':';
	to_find_custom[size_tofind + 1] = '\0';
	line = ft_strstr(buffer, to_find_custom);
	while (!ft_is_alpha(*line))
		line++;
	size = ft_strlen_custom(line);
	content = malloc(size + 1);
	ft_strlcpy(content, line, size + 1);
	write(1, content, size);
	free(content);
	free(to_find_custom);
}
