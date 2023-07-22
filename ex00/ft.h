/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:22:51 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/22 17:25:13 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_dict
{
	unsigned int	number;
	char			*value;
}	t_dict;

void				ft_putstr(char *str);
long long			ft_atoi(char *str);
void				print_number(unsigned int num, t_dict *dict, int dict_len);

#endif
