/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 22:35:18 by mdias             #+#    #+#             */
/*   Updated: 2023/06/11 22:36:01 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

char	*ft_read_file2(char *buffer, char *new_dict)
{
	int	file;
	int	read_byte;

	file = open(new_dict, O_RDONLY);
	read_byte = read(file, buffer, BUFFER_SIZE);
	buffer[read_byte] = '\0';
	close(file);
	return (buffer);
}
