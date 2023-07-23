/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:49:53 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 16:19:38 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	throw_error(char *message, int code)
{
	ft_putstr(message);
	ft_putstr("\n");
	return (code);
}

int	main(int argc, char **argv)
{
	long long	value;
	char				*dict_filename;
	t_dict				*dict;
	int					dict_size;

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
		return (throw_error("Error", 2));
	dict = parse_dict(dict_filename, &dict_size);
	if (!dict)
		return (throw_error("Dict Error", 1));
	print_number(value, dict, dict_size);
	free(dict);
}
