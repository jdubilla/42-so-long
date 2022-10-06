/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:07:19 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 15:33:38 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	if (!size)
		return (len);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*#include <string.h>
int main()
{
	char tab[100] = "Bonjour";
	char tab2[100] = "Bonjour";
	char tab3[100] = "Bonjour";
	char tab4[100] = "Bonjour";
	printf("%lu\n", strlcpy(tab, "hey", 3));
	printf("%lu\n", ft_strlcpy(tab2, "hey", 3));
	printf("%lu\n", strlcpy(tab3, "123456", 15));
	printf("%lu\n", ft_strlcpy(tab4, "123456", 15));
}*/
