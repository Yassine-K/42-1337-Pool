/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:18:29 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/17 12:21:29 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y && x > 0 && y > 0)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 || i == x - 1) && (j == 0 || j == y - 1))
				ft_putchar('o');
			else if ((i == 0 || i == x - 1) && j > 0 && j < y - 1)
				ft_putchar('|');
			else if ((j == 0 || j == y - 1) && i > 0 && i < x - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	if (x < 0 || y < 0)
		write(1, "Error: input must be a positif number!\n", 39);
}
