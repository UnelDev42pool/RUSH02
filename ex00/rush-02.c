/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:49:53 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/22 13:28:50 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		value;
	char	*dict_file;

	value = -1;
	dict_file = "numbers.dict";
	if (argc == 2)
		value = ft_atoi(argv[1]);
	else if (argc == 3)
	{
		dict_file = argv[1];
		value = ft_atoi(argv[2]);
	}
	if (value < 0)
	{
		ft_putstr("Error\n");
		return (2);
	}
}
