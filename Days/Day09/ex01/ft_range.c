/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:23:44 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/23 19:45:40 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	range;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	tab = (int *) malloc(range * 4);
	if (!tab)
		return (0);
	i = 0;
	while (i < range)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
