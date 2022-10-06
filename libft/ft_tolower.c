/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:22:49 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 15:36:54 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	return (c);
}

/*int main()
{
	printf("%c", ft_tolower('A'));
	printf("%c", ft_tolower('Z'));
	printf("%c", ft_tolower('B'));
	printf("%c", ft_tolower('a'));
	printf("%c", ft_tolower('5'));
}*/
