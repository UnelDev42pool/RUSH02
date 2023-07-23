/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:49:53 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 14:08:57 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		value;
	char	*dict_filename;

	value = -1;
	dict_filename = "numbers.dict";
	if (argc == 2)
		value = ft_atoi(argv[1]);
	else if (argc == 3)
	{
		dict_filename = argv[1];
		value = ft_atoi(argv[2]);
	}
	if (value < 0)
	{
		ft_putstr("Error\n");
		return (2);
	}

	print_number(value, parse_dict(dict_filename), 32);
}
