/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:23:21 by mdias             #+#    #+#             */
/*   Updated: 2023/06/02 19:28:23 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// #include <stdio.h>

// int    main(void)
// {
//     int arr[] = {-10, 42, 5, 9, 7};
//     ft_rev_int_tab(arr, 5);

//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d, ", arr[i]);
//     }
// }