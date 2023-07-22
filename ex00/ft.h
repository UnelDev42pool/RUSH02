/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:22:51 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/22 13:10:09 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_dictionary
{
	unsigned int number;
	char *value; 
} t_dictionary;


void				ft_putstr(char *str);
unsigned int		ft_atoi(char *str);

#endif
