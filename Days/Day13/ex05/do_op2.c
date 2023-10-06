/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:59:38 by ykhayri           #+#    #+#             */
/*   Updated: 2022/06/02 16:57:23 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_valid(char *op)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (op[l])
		l++;
	if (op[i] && l == 1 && (op[i] == '+' || op[i] == '-'
			|| op[i] == '*' || op[i] == '/' || op[i] == '%'))
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	s;

	i = 0;
	s = 1;
	n = 0;
	while (str[i] && str[i] < 33)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (n * s);
}

void	ft_putnbr(int n)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar('-');
		nbr = n * -1;
	}
	else
		nbr = n;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
