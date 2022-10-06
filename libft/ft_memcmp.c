/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:09:14 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 15:22:21 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tab;
	unsigned char	*tab2;
	size_t			i;

	tab = (unsigned char *)s1;
	tab2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (tab[i] != tab2[i])
			return (tab[i] - tab2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_memcmp("aa", "bc", 10));
	printf("%d\n", memcmp("aa", "bc", 10));
	printf("%d\n", ft_memcmp("Bonjour", "Bonkiour", 13));
	printf("%d\n", memcmp("Bonjour", "Bonkiour", 13));
}*/
