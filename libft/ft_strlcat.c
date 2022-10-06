/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:10:59 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 12:12:18 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (size == 0 || size <= lendest)
		return (lensrc + size);
	while (i < lensrc && i < size - lendest - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}

/*int main()
{
	char tab[100] = "Bonjour";
	char tab2[100] = "Bonjour";
	printf("%lu\n", strlcat(tab, "Les gars", 0));
	printf("%zu\n", ft_strlcat(tab2, "Les gars", 0));
}*/
