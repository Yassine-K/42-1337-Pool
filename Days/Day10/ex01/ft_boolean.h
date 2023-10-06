/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:02:36 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/29 01:29:59 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define ODD_MSG "I have an even number of arguments.\n"

# define EVEN_MSG "I have an odd number of arguments.\n"

# define TRUE 1

# define FALSE 0

# define SUCCESS 0

# define EVEN(nbr) nbr % 2

typedef int	t_bool;

#endif
