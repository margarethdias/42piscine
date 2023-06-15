/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 23:00:23 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/11 19:43:38 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_NUMBER_H
# define FT_PRINT_NUMBER_H

void	unit(char *buffer, char *c);
void	ten(char *buffer, char *c);
void	hundred(char *buffer, char *c);
void	thousand(char *buffer, char *c, int len);
void	million(char *buffer, char *c, int len);
void	billion(char *buffer, char *c);
void	return_data(char *buffer, char *c, int len);
void	ft_handle_zero(char *buffer, char *nbr, int len);
char	*ft_filter_zero(char *nbr, int len);

#endif