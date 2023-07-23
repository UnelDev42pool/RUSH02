/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:15:48 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/23 15:38:42 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned long long	ft_iterative_power(unsigned long long nb,
					unsigned long long power)
{
	unsigned long long	i;
	unsigned long long	total;

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
