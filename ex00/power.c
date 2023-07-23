/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:15:48 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/23 16:18:03 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_iterative_power(long long nb,
					long long power)
{
	long long	i;
	long long	total;

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
