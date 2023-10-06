/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:43:16 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/30 20:40:20 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i])
		i++;
	str = (char *) malloc(i + 1);
	if (!str)
		return (0);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			l;
	t_stock_str	*tab;

	i = 0;
	tab = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (0);
	while (i < ac)
	{
		l = ft_strlen(av[i]);
		tab[i].size = l;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
