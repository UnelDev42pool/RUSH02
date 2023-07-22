/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:11:33 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/22 15:25:44 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <unistd.h>

void print_number(unsigned int num, t_dictionary *dictionary, int dictionary_len)
{
	int	i;
	if(num == 0)
		ft_putstr(dictionary[0].value);
	while (num > 0)
	{
		i = dictionary_len;
		while (num / dictionary[i].number < 1)
		{
			i--;
		}
		num = num - dictionary[i].number;
		ft_putstr(dictionary[i].value);
		ft_putstr(" ");
	}
	printf("\n");
}
