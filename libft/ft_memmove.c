/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:06:48 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/26 13:20:55 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)src;
	s2 = (char *)dst;
	i = 0;
	if (s2 > s1)
		while (len-- > 0)
			s2[len] = s1[len];
	else
	{
		while (i < len)
		{
			s2[i] = s1[i];
			i++;
		}
	}
	return (dst);
}

/*#include <stdio.h>
int main()
{
	char s1[50] = "123456789";
	printf("%s\n", memmove(s1 + 3, s1, 2));
	printf("%s\n", ft_memmove(s1 + 3, s1, 2));
	printf("%s\n", memmove(s1, s1 + 3, 2));
	printf("%s\n", ft_memmove(s1, s1 + 3, 2));
}*/
