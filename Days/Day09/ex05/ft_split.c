/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:23:06 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/31 22:01:39 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset) == 1)
			str++;
		i = ft_strlen(str, charset);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

char	*ft_strcpy(char *src, int j)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc((j + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (i < j && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char *str, char *charset)
{
	char		**dest;
	int			s;
	int			i;
	int			j;

	i = 0;
	s = ft_wordcount(str, charset);
	dest = malloc((s + 1) * sizeof(char *));
	if (!dest)
		return (0);
	while (i < s)
	{
		while (ft_is_charset(*str, charset))
			str++;
		j = ft_strlen(str, charset);
		dest[i] = ft_strcpy(str, j);
		str += j;
		i++;
	}
	dest[s] = 0;
	return (dest);
}
