/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:47:01 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/23 21:55:52 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	tab = (int *) malloc(size * 4);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (size);
}
