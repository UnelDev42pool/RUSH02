/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:11:33 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/23 16:09:15 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <unistd.h>

void	print_obvious(unsigned long long num, t_dict *dict, int dic_len)
{
	int	i;

	i = 0;
	while (num != dict[i].value && i < dic_len)
		i++;
	ft_putstr(dict[i].str);
}

unsigned long long	intlen(unsigned long long n)
{
	if (n < 0)
		return (1 + intlen(-n));
	else if (n < 10)
		return (1);
	else
		return (1 + intlen(n / 10));
}

void	print_simple_number(unsigned long long num, t_dict *dict, int dict_len)
{
	if (num <= 20)
	{
		print_obvious(num, dict, dict_len);
	}
	else if (num <= 99)
	{
		print_obvious((num / 10) * 10, dict, dict_len);
		if ((num % 10) != 0)
		{
			ft_putstr(" ");
			print_simple_number(num % 10, dict, dict_len);
		}
	}
	else if (num <= 999)
	{
		print_obvious((num / 100), dict, dict_len);
		ft_putstr(" ");
		print_obvious(100, dict, dict_len);
		if ((num % 100) != 0)
		{
			ft_putstr(" ");
			print_simple_number(num % 100, dict, dict_len);
		}
	}
}

int	too_big(unsigned long long num, t_dict *dict, int dict_len)
{
	int	i;

	i = 0;
	while (i < dict_len)
	{
		if (dict[i].value >= num)
			return (0);
		i++;
	}
	return (1);
}

void	print_number(unsigned long long num, t_dict *dict, int dict_len)
{
	unsigned long long	length;

	length = ft_iterative_power(10, (intlen(num) - 1) - (intlen(num) - 1) % 3);
	if (too_big(length, dict, dict_len))
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	print_simple_number(num / length, dict, dict_len);
	if (length > 99)
	{
		ft_putstr(" ");
		print_obvious(length, dict, dict_len);
	}
	if (num % length > 999)
	{
		ft_putstr(" ");
		print_number(num % length, dict, dict_len);
	}
	else if (num % length > 0)
	{
		ft_putstr(" ");
		print_simple_number(num % length, dict, dict_len);
	}
}
