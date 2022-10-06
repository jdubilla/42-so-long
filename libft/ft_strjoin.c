/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:33:35 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 15:31:16 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*res;

	i = -1;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char *) * (len + 1));
	if (!res)
		return (NULL);
	while (s1[++i])
	{
		res[j] = s1[i];
		j++;
	}
	i = -1;
	while (s2[++i])
	{
		res[j] = s2[i];
		j++;
	}
	res[j] = '\0';
	return (res);
}

/*#include <stdio.h>
int main()
{
	char tab[] = "Bonjour";
	char tab2[] = "Hello";
	printf("%s", ft_strjoin(tab, tab2));
}*/
