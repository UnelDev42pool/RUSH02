/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:15:48 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/23 16:41:10 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

long long	ft_power(long long nb,
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
