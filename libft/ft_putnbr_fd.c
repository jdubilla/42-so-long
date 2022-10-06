/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:33:33 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 15:22:55 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;
	int		len;

	nbr = ft_itoa(n);
	len = ft_strlen(nbr);
	write(fd, nbr, len);
}

/*int main()
{
	ft_putnbr_fd(-123, 1);
}*/
