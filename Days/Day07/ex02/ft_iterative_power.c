/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:09:59 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/23 00:28:34 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 0;
	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power - 1)
	{
		nb *= j;
		i++;
	}
	return (nb);
}
