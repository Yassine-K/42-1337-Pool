/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:24:17 by ykhayri           #+#    #+#             */
/*   Updated: 2022/06/02 12:29:08 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*num_t;

	i = 0;
	num_t = (int *) malloc(length * sizeof(int));
	if (!num_t)
		return (0);
	while (i < length)
	{
		num_t[i] = f(tab[i]);
		i++;
	}
	return (num_t);
}
