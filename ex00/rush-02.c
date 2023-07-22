/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:49:53 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/22 11:30:41 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		value;
	char	*dict_file;

	dict_file = "numbers.dict";
	if (argc == 2)
		value = ft_atoi(argv[1]);
	else if (argc == 3)
	{
		dict_file = argv[1];
		value = ft_atoi(argv[2]);
	}
	if (!value)
	{
		ft_putstr("Error\n");
		return (2);
	}
}
