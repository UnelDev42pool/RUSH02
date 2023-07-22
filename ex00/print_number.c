/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:11:33 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/22 19:46:48 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <unistd.h>

int test_number(unsigned long num, t_dict *dict, int dict_len)
{
	// to do is no sorted
	printf("%d", dict[dict_len].value);
	if (dict[dict_len].value <= 10 && num > dict[dict_len].value)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}

	if (dict[dict_len].value <= 100
		&& num > dict[dict_len].value + 9)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	//to do max !!!
	return (0);
}

void print_number(unsigned long num, t_dict *dict, int dict_len)
{
	int	i;
	unsigned long	count;
	// if(test_number(num, dict, dict_len))
	// 	return;
	if(num == 0)
		ft_putstr(dict[0].str);
	while (num > 0)
	{
		i = dict_len;
		while (num / dict[i].value < 1)
		{
			i--;
		}
		count = 0;
		if (num >= dict[i].value)
		{
			count = num / dict[i].value;
			num %= dict[i].value;
		}
		if (count > 1 || (dict[i].value >= 100 && count > 0))
			print_number(count, dict, dict_len);
		ft_putstr(dict[i].str);
		ft_putstr(" ");
	}
}
