/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:37:30 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 14:43:15 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_in_set(char const *s1, char const *set, int index, int signe)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (set[i])
	{
		if (s1[index] == set[i])
		{
			res++;
			index += signe;
			i = 0;
		}
		else
			i++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		len;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	start = ft_in_set(s1, set, i, 1);
	end = ft_in_set(s1, set, ft_strlen(s1) - 1, -1);
	res = malloc(sizeof(char) * (len - start - end + 1));
	if (!res)
		return (NULL);
	while (i < len - start - end)
	{
		res[i] = s1[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("qqqweBonjweqourwwqwe", "weq"));
	printf("%s\n", ft_strtrim("qqqweBonjweqourwwqwe", ""));
	printf("%s\n", ft_strtrim("", "weq"));
}*/
