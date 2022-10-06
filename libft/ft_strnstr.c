/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:41:18 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/26 13:08:50 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	res = 0;
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			res = i;
			while (big[i] == little[j] || !little[j])
			{
				if (little[j] == '\0' && res + j <= len)
					return ((char *)big + res);
				i++;
				j++;
			}
			i = res;
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s\n", ft_strnstr("Bojonur", "ur", 6));
	printf("%s\n", strnstr("Bojonur", "ur", 6));
	printf("%s\n", ft_strnstr("Bojonur", "ur", 7));
	printf("%s\n", strnstr("Bojonur", "ur", 7));
	printf("%s\n", ft_strnstr("Bojonur", "ur", 55));
	printf("%s\n", strnstr("Bojonur", "ur", 55));
	printf("%s\n", ft_strnstr("Bojonur", "ur", 50));
	printf("%s\n", strnstr("Bojonur", "ur", 50));
}*/
