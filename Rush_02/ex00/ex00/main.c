/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:20:58 by mdias             #+#    #+#             */
/*   Updated: 2023/06/12 09:35:34 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"
#include <unistd.h>
#include <stdio.h>

void	ft_error(void)
{
	write(2, "Error\n", 6);
}

void	ft_dict_error(void)
{
	write(2, "Dict Error\n", 12);
}

char	ft_dict_test(char *buffer, char *nbr, int dict)
{
	if (!(dict < 0))
	{
		ft_dict_error();
		return ('1');
	}	
	return (ft_print_number_as_str(buffer, nbr));
}

int	main(int argc, char **argv)
{
	char	buffer[BUFFER_SIZE + 1];
	char	clean_str[1000];
	int		error_2;

	if (!(argc != 2 && argc != 3))
	{
		error_2 = ft_atoi(argv[argc - 1], clean_str);
		if (argc == 2)
			ft_read_file(buffer);
		else if (argc == 3)
			ft_read_file2(buffer, argv[1]);
		if (!(error_2 < 0))
		{
			ft_print_number(buffer, clean_str);
			return (0);
		}
	}
	ft_error();
}
