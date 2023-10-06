/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:12:31 by ykhayri           #+#    #+#             */
/*   Updated: 2022/06/02 16:54:53 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include<unistd.h>

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mult(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		is_valid(char *op);
void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int n);
void	ft_putstr(char *str);

#endif
