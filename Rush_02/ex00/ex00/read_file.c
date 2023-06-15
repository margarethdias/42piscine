/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:29:12 by mdias             #+#    #+#             */
/*   Updated: 2023/06/11 22:36:37 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

char	*read_file(char	*buffer)
{
	int	file;
	int	read_byte;

	file = open(DICT_PATH, O_RDONLY);
	read_byte = read(file, buffer, BUFFER_SIZE);
	buffer[read_byte] = '\0';
	close(file);
	return (buffer);
}
