/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:11:33 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/22 17:25:46 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <unistd.h>

void print_number(unsigned int num, t_dict *dict, int dict_len)
{
	int	i;
	if(num == 0)
		ft_putstr(dict[0].value);
	while (num > 0)
	{
		i = dict_len;
		while (num / dict[i].number < 1)
		{
			i--;
		}
		num = num - dict[i].number;
		ft_putstr(dict[i].value);
		ft_putstr(" ");
	}
	printf("\n");
}
