/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 13:57:04 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/23 00:37:17 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int i, int j, char **av)
{
	int		k;
	char	*c;

	k = 0;
	while (av[i][k] == av[j][k])
		k++;
	if (av[i][k] > av[j][k])
	{
		c = av[i];
		av[i] = av[j];
		av[j] = c;
	}
}

void	ft_print(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			ft_swap(i, j, av);
			j++;
		}
		i++;
	}
	k = 0;
	while (++k < ac)
		ft_print(av[k]);
	return (0);
}
