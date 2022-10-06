/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:08:59 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/26 16:55:26 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*res;

	i = 0;
	j = 0;
	res = malloc (sizeof(*s) * (len + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			res[j] = s[i];
			j++;
		}
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>
int main ()
{
	printf("%s\n", ft_substr("Bonjour", 3, 50));
}*/
