/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:56:18 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/31 22:06:59 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_fill(int size, char **strs, char *sep, char *ptr)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*ptr = strs[i][j];
			j++;
			ptr++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			*ptr = sep[j];
			j++;
			ptr++;
		}
		i++;
	}
	*ptr = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		l;
	char	*ptr;
	char	*res;

	l = 0;
	i = 0;
	if (size <= 0)
	{
		ptr = (char *) malloc(sizeof(char *));
		ptr[0] = 0;
		return (ptr);
	}
	while (i < size)
	{
		l += ft_strlen(strs[i]);
		i++;
	}
	ptr = NULL;
	ptr = malloc(sizeof(char *) * ((l + ft_strlen(sep) * (size - 1)) + 1));
	if (!ptr)
		return (0);
	res = ptr;
	ft_fill(size, strs, sep, ptr);
	return (res);
}
