/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:58:17 by ykhayri           #+#    #+#             */
/*   Updated: 2022/06/02 18:17:57 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (cmp(tab[i], tab[j]) > 0)
				ft_swap(i, j, tab);
			j++;
		}
		i++;
	}
}
