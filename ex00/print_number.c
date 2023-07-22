/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:11:33 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/22 17:44:07 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <unistd.h>

int test_number(unsigned long num, t_dict *dict, int dict_len)
{
	// to do is no sorted
	printf("%d", dict[dict_len].number);
	if (dict[dict_len].number <= 10 && num > dict[dict_len].number)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	
	if (dict[dict_len].number <= 100 
		&& num > dict[dict_len].number + 9)
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
		ft_putstr(dict[0].value);
	while (num > 0)
	{
		i = dict_len;
		while (num / dict[i].number < 1)
		{
			i--;
		}
		count = 0;
		if (num >= dict[i].number)
		{
			count = num / dict[i].number;
			num %= dict[i].number;
		}
		if (count > 1 || (dict[i].number >= 100 && count > 0))
			print_number(count, dict, dict_len);
		ft_putstr(dict[i].value);
		ft_putstr(" ");
	}
}
