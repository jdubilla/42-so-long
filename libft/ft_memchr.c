/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:36:47 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 15:21:39 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*res;

	i = 0;
	res = (unsigned char *)s;
	while (i < n && res[i])
	{
		if (res[i] == (unsigned char) c)
			return (res + i);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int main()
{
	printf("%p\n", ft_memchr("Bonjour", 'q', 15));
	printf("%p\n", memchr("Bonjour", 'q', 15));
	printf("%p\n", ft_memchr("Bonjour", 'u', 6));
	printf("%p\n", memchr("Bonjour", 'u', 6));
}*/
