/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:33:33 by ykhayri           #+#    #+#             */
/*   Updated: 2022/06/02 19:27:55 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	asc_ord(int *tab, int l, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < l)
	{
		j = i + 1;
		while (j < l)
		{
			if (f(tab[i], tab[j]) > 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	desc_ord(int *tab, int l, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < l)
	{
		j = i + 1;
		while (j < l)
		{
			if (f(tab[i], tab[j]) < 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (asc_ord(tab, length, f) || desc_ord(tab, length, f))
		return (1);
	return (0);
}
