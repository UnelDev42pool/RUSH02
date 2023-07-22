/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:49:53 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/22 19:46:48 by deydoux          ###   ########.fr       */
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

	t_dict test[32];
	test[0].value = 0;
	test[0].str = "zero";
	test[1].value = 1;
	test[1].str = "one";
	test[2].value = 2;
	test[2].str = "two";
	test[3].value = 3;
	test[3].str = "three";
	test[4].value = 4;
	test[4].str = "four";
	test[5].value = 5;
	test[5].str = "five";
	test[6].value = 6;
	test[6].str = "six";
	test[7].value = 7;
	test[7].str = "seven";
	test[8].value = 8;
	test[8].str = "eight";
	test[9].value = 9;
	test[9].str = "nine";
	test[10].value = 10;
	test[10].str = "ten";
	test[11].value = 11;
	test[11].str = "eleven";
	test[12].value = 12;
	test[12].str = "twelve";
	test[13].value = 13;
	test[13].str = "thirteen";
	test[14].value = 14;
	test[14].str = "fourteen";
	test[15].value = 15;
	test[15].str = "fifteen";
	test[16].value = 16;
	test[16].str = "sixteen";
	test[17].value = 17;
	test[17].str = "seventeen";
	test[18].value = 18;
	test[18].str = "eighteen";
	test[19].value = 19;
	test[19].str = "nineteen";
	test[20].value = 20;
	test[20].str = "twenty";
	test[21].value = 30;
	test[21].str = "thirty";
	test[22].value = 40;
	test[22].str = "forty";
	test[23].value = 50;
	test[23].str = "fifty";
	test[24].value = 60;
	test[24].str = "sixty";
	test[25].value = 70;
	test[25].str = "seventy";
	test[26].value = 80;
	test[26].str = "eighty";
	test[27].value = 90;
	test[27].str = "ninety";
	test[28].value = 100;
	test[28].str = "hundred";
	test[29].value = 1000;
	test[29].str = "thousand";
	test[30].value = 1000000;
	test[30].str = "million";
	test[31].value = 1000000000;
	test[31].str = "billion";
	print_number(424242, test, 32);
	// int		value;
	// char	*dict_file;

	// value = -1;
	// dict_file = "numbers.dict";
	// if (argc == 2)
	// 	value = ft_atoi(argv[1]);
	// else if (argc == 3)
	// {
	// 	dict_file = argv[1];
	// 	value = ft_atoi(argv[2]);
	// }
	// if (value < 0)
	// {
	// 	ft_putstr("Error\n");
	// 	return (2);
	// }
}
