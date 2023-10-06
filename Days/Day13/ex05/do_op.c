/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:39:47 by ykhayri           #+#    #+#             */
/*   Updated: 2022/06/02 23:33:44 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	do_op(int a, int b, int (*f)(int, int))
{
	int	res;

	res = f(a, b);
	ft_putnbr(res);
}

void	error(char *op)
{
	if (op[0] == '/')
		ft_putstr("Stop : division by zero");
	else
		ft_putstr("Stop : modulo by zero");
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (is_valid(av[2]))
		{
			if (av[2][0] == '+')
				do_op(ft_atoi(av[1]), ft_atoi(av[3]), &ft_add);
			else if (av[2][0] == '-')
				do_op(ft_atoi(av[1]), ft_atoi(av[3]), &ft_sub);
			else if (av[2][0] == '*')
				do_op(ft_atoi(av[1]), ft_atoi(av[3]), &ft_mult);
			else if (ft_atoi(av[3]) == 0 && (av[2][0] == '/'
				|| av[2][0] == '%'))
				error(av[2]);
			else if (av[2][0] == '/')
				do_op(ft_atoi(av[1]), ft_atoi(av[3]), &ft_div);
			else if (av[2][0] == '%')
				do_op(ft_atoi(av[1]), ft_atoi(av[3]), &ft_mod);
		}
		else
			ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
