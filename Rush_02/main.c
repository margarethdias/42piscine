/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:20:58 by mdias             #+#    #+#             */
/*   Updated: 2023/06/11 14:00:54 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char buffer[BUFFER_SIZE + 1];	
	char    clean_str[1000] ;
	// char *number;

	// printf("%d", argc);

	// if (argc < 1 || argc > 3)
	// {
	// 	write(2, "Error", 5);
	// 	return (1);
	// }
	// number = argv[1];
	printf("%d\n", argc);
	ft_atoi(argv[1], clean_str);
	read_file(buffer);
	ft_print_number(buffer, clean_str);
	return (0);
}
