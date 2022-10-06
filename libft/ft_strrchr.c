/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:52:09 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 15:36:28 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s\n", strrchr("Bonjour", 'w'));
	printf("%s\n", ft_strrchr("Baonjour", 'r'));
}*/
