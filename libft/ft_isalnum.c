/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:50:43 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 11:48:22 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", isalnum('\n'));
}*/
