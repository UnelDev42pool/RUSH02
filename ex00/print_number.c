/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:11:33 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/23 14:32:45 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"


int print_obvious(int num, t_dict *dict, int dic_len)
{
	int	i;

	i = 0;
	while (num != dict[i].value && i < dic_len)
		i++;
	if (num != dict[i].value)
	{
		return (0);
	}
	ft_putstr(dict[i].str);
	return(1);
}
unsigned int	intlen(unsigned int n) {
	if (n < 0)
		return (1 + intlen(-n));
	else if (n < 10)
		return (1);
	else
		return (1 + intlen(n/10));
}

void print_simple_number(unsigned int num, t_dict *dict, int dict_len)
{
	if (num <= 20)
	{
		print_obvious(num, dict, dict_len);
	}
	else if ( num <= 99)
	{
		print_obvious((num / 10) * 10, dict, dict_len);
		ft_putstr(" ");
				if((num % 10) != 0)
			print_simple_number(num % 10, dict, dict_len);
	}else if (num <= 999)
	{
		print_obvious((num / 100), dict, dict_len);
		ft_putstr(" ");
		print_obvious(100, dict, dict_len);
		ft_putstr(" ");
		if((num % 100) != 0)
			print_simple_number(num % 100, dict, dict_len);
	}

}
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	total = 1;
	i = 0;
	if (power < 0)
		return (0);
	while (i++ < power)
	{
		total *= nb;
	}
	return (total);
}

void print_number(unsigned int num, t_dict *dict, int dict_len)
{
	int length;

	length = ft_iterative_power(10, (intlen(num) - 1) - (intlen(num) - 1) % 3);
	print_simple_number(num / length, dict, dict_len);
	ft_putstr(" ");
	print_obvious(length, dict, dict_len);
	if (num %length > 999)
	{
		ft_putstr(" ");
		print_number(num % length, dict, dict_len);
	}
	else if (num %length > 0)
	{
		ft_putstr(" ");
		print_simple_number(num %length, dict, dict_len);
	}
}
