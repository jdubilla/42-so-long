/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:50:43 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/22 13:42:28 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isdigit('7'));
	printf("%d\n", isdigit('7'));
	printf("%d\n", ft_isdigit('b'));
	printf("%d\n", isdigit('b'));
}*/
