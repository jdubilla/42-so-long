/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:28:05 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/27 05:33:49 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_strlen(const char *s);
int		ft_print_addr(void *addr);
int		ft_putnbr(int n);
int		ft_putnbr_bis(unsigned long long n);
int		ft_putnbr_hexa(int nbr, char c);
char	*ft_memset_bis(char *s, int c, int n, char f);

#endif
