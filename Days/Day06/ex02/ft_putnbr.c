/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:09:02 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/18 00:13:43 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;
	char			nbr;

	nbr = '0';
	i = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i >= 0 && i <= 9)
	{
		ft_putchar(nbr + i);
	}
	if (i > 9 && i < 100)
	{
		ft_putchar(nbr + i / 10);
		ft_putnbr(i % 10);
	}
	if (i > 99)
	{
		ft_putnbr(i / 10);
		ft_putchar(nbr + i % 10);
	}
}
