/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:11:33 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/23 14:23:51 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_number(long long num, t_dict *dict, int dict_len)
{
	int			i;
	long long	count;

	if (num == 0)
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
