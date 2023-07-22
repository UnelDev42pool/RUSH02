/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:49:53 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/22 16:10:08 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	t_dictionary test[32];
	test[0].number = 0;
	test[0].value = "zero";
	test[1].number = 1;
	test[1].value = "one";
	test[2].number = 2;
	test[2].value = "two";
	test[3].number = 3;
	test[3].value = "three";
	test[4].number = 4;
	test[4].value = "four";
	test[5].number = 5;
	test[5].value = "five";
	test[6].number = 6;
	test[6].value = "six";
	test[7].number = 7;
	test[7].value = "seven";
	test[8].number = 8;
	test[8].value = "eight";
	test[9].number = 9;
	test[9].value = "nine";
	test[10].number = 10;
	test[10].value = "ten";
	test[11].number = 11;
	test[11].value = "eleven";
	test[12].number = 12;
	test[12].value = "twelve";
	test[13].number = 13;
	test[13].value = "thirteen";
	test[14].number = 14;
	test[14].value = "fourteen";
	test[15].number = 15;
	test[15].value = "fifteen";
	test[16].number = 16;
	test[16].value = "sixteen";
	test[17].number = 17;
	test[17].value = "seventeen";
	test[18].number = 18;
	test[18].value = "eighteen";
	test[19].number = 19;
	test[19].value = "nineteen";
	test[20].number = 20;
	test[20].value = "twenty";
	test[21].number = 30;
	test[21].value = "thirty";
	test[22].number = 40;
	test[22].value = "forty";
	test[23].number = 50;
	test[23].value = "fifty";
	test[24].number = 60;
	test[24].value = "sixty";
	test[25].number = 70;
	test[25].value = "seventy";
	test[26].number = 80;
	test[26].value = "eighty";
	test[27].number = 90;
	test[27].value = "ninety";
	test[28].number = 100;
	test[28].value = "hundred";
	test[29].number = 1000;
	test[29].value = "thousand";
	test[30].number = 1000000;
	test[30].value = "million";
	test[31].number = 1000000000;
	test[31].value = "billion";
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
