/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:50:43 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/22 13:38:16 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isascii('7'));
	printf("%d\n", isascii('7'));
	printf("%d\n", ft_isascii('J'));
	printf("%d\n", isascii('J'));
}*/
